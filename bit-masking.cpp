#include<iostream>
using namespace std;
void get_bit(int n, int k){
    if(n&(1<<(k-1))){
        cout<<true<<endl;
    }
    else{
        cout<<false<<endl;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    // get_bit(n,k);
    // cout<<(n\(1<<(k-1)))<<endl;
    cout<<(n&(~(1<<(k-1))))<<endl;
    return 0;

}