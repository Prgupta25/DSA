// jo sabse last mei element jayega vo sabse phele nikalega
// last iin first out
#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<string> s;
    s.push("pranav");
    s.push("gupta");
    s.push("kumar");

    cout<<"top element "<<s.top()<<endl;

    s.pop();
    cout<<"top element "<<s.top()<<endl;
    
    cout<<"size of the stack"<<s.size()<<endl;

    cout<<"empty or not"<<s.empty()<<endl;


    return 0;
}