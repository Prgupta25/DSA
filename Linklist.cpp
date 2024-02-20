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
int main(){
    Listnode* head=new Listnode(3);
    head->next=new Listnode(2);
    head->next->next=new Listnode(5);
    Listnode* temp=head;
    while(temp!=NULL){
        cout << temp-> data <<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}