#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    // base case
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    else{
        int ans = factorial(n-1) * n;
        return ans;
    }
}
int main(){
    int n;
    cin>>n;

    int fact = factorial(n);

    cout<<"factorial of number:"<<n<<" "<<fact<<endl;
    return 0;
}