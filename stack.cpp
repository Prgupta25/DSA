#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    int* arr;
    int capacity;
    int Top;
    Stack(int cap){
        capacity=cap;
        arr=new int[cap];
        Top==-1;
    }
    void push(int x){
        if(Top==capacity-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        Top++;
        arr[Top]=x;
    }
    void pop(){
        if(Top==-1){
            cout<<"Under overflow"<<endl;
            return;
        }
        Top--;
    }
    int peak(){
        if(Top==-1){
            cout<<"There is no element in the stack"<<endl;
            return -1;
        }
        return arr[Top];
    }
    bool isEmpty(){
        return Top==-1;
    }
    int size(){
        return Top + 1;
    }
};
void display(Stack s){
    while(!s.isEmpty()){
        cout<<s.peak()<<" ";
        s.pop();
    }
}
int main(){
    Stack s(4);
    s.pop();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.push(5);
    display(s);
    return 0;
}