#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(10);
    d.push_front(20);

    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // d.pop_front();
    cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }


    cout<<"print first index element -->"<<d.at(1)<<endl;
    cout<<"front"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;

    cout<<"empty or not"<<d.empty()<<endl;

    cout<<"before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }
    return 0;
}
