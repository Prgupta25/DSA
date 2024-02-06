// vector is a dynamic array it has property to increase and decrease its size
// if old vector become full so vector create a new vector whose size is double of old vector and it copy the elements of old vector and new elements
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"capacity "<<v.capacity()<<endl;  // size tell us how many elements in the vector and capacity tell us how memory allocated in the vector
    v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;

    cout<<"element at 2nd index "<<v.at(2)<<endl;
    cout<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;

    cout<<"before pop back"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop back"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear "<<v.size()<<endl;
    v.clear();
    cout<<"after clear "<<v.size()<<endl;

    //sabki time complexcity O(1) hai
}