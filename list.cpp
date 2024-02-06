#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;

    list<int> n(5,100);
    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(10);
    l.push_front(20);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of the list --> "<<l.size()<<endl;

    return 0;
}

// time complexcity of erase is O(n) haii
// baki ki time complexcity O(1) haii