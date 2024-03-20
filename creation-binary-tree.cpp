#include<bits/stdc++.h>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        
        //constructor
    node(int d){
         data = d;
         left = NULL;
         right = NULL;
    }
};

node* buildtree(node* root){

    cout<<"Enter the data:"<<endl;

    int data;
    cin>>data;

    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the elements in left:"<<data<<endl;
    root -> left = buildtree(root -> left);
    cout<<"Enter the elements in right:"<<data<<endl;
    root -> right = buildtree(root->right);
    return root;
}

void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){    //purane level complete traverse ho chuka hai
            cout<<endl;
           if(!q.empty()){
                q.push(NULL);   // queue have some elements left
            }
        }

        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
            };

            if(temp->right){
            q.push(temp->right);
            }
        }
    }
}
int main(){

    node* root = new node(0);

    //creating tree
    root = buildtree(root);

    cout<<"Printing the level oreder traversal"<<endl;
    levelordertraversal(root);
    return 0;
}