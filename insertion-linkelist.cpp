// drawback of linkelist ye back traverse nhi karta 
#include<iostream>
using namespace std;
class Listnode{
public:
    int data;
    Listnode* next;
    Listnode(int x){
        data=x;
        next=NULL;
    }
};
void deletion(Listnode* &head, int val){
    Listnode* temp=head;
    if(head->data==val){
        head=head->next;
        delete temp;
        return;
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Listnode* t=temp->next;
    temp->next=temp->next->next;
    delete t;
}
bool search(Listnode* &head,int val){
    Listnode*temp=head;
    while(temp){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void insertAtFirst(Listnode* &head,int val){
    Listnode*temp=new Listnode(val);
    temp->next=head;
    head=temp;
}
void insertAtlast(Listnode* &head,int val){
    if(head==NULL){
        head=new Listnode(val);
        return;
    }
    Listnode* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Listnode(val);
}
void display(Listnode* &head){
    Listnode* temp=head;
    while(temp!=NULL){
        cout << temp-> data <<"->";
        temp=temp->next;
    }
}
int main(){
    Listnode* head=new Listnode(3);
    head->next=new Listnode(2);
    head->next->next=new Listnode(5);
    display(head);
    cout<<"NULL"<<endl;
    insertAtlast(head,7);
    insertAtFirst(head,10);
    deletion(head,3);
    cout<<search(head,5)<<endl;

    return 0;
}