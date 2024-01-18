#include<iostream>
using namespace std;
int strToInt(string str){
    int ans=0;
    int i=0;
    while(i<str.size()){
        ans *=10;
        ans+=str[i]-'0';
        i++;
    }
    return ans;
}
int main(){
    string str;
    cin>>str;
    cout<<strToInt(str)<<endl;
    return 0;
}