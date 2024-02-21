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
Listnode* mergelist(Listnode* l1, Listnode* l2){
    Listnode* ans=new Listnode(0);
    Listnode* temp=ans;
    while(l1&&l2){
        if(l1->data>l2->data){
            temp->next=new Listnode(l2->data);
            l2=l2->next;
            temp=temp->next;
        }
        else{
            temp->next=new Listnode(l1->data);
            l1=l1->next;
            temp=temp->next;
        }
    }
    while(l2){
        temp->next=new Listnode(l2->data);
        l2=l2->next;
        temp=temp->next;
    }
    while(l2){
        temp->next=new Listnode(l1->data);
        l1=l1->next;
        temp=temp->next;
    }
    return ans->next;
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
int main(){
    int n1,n2;
    cin>>n1>>n2;
    Listnode* head1=new Listnode(0);
    Listnode* head2=new Listnode(0);
    for(int i=0;i<n2;i++){
        
    }
}