#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> list1={10,20,30,40};
    list<int> list2={10,70,80,90};
    list2.merge(list1);
    cout<<"List :";
    for (auto it = list2.begin(); it != list2.end(); ++it) 
        cout << *it << " ";
    return 0;
}