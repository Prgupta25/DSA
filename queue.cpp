// queue means line first in first out
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;

    q.push("pranav");
    q.push("gupta");
    q.push("kumar");

    cout<<"size before pop "<<q.size()<<endl;
    cout<<"First element "<<q.front()<<endl;
    q.pop();
    cout<<"first element "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;
}