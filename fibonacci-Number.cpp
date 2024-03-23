#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int fib(int n){
        //base case
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        //recursive call
        int ans = fib(n-1)+fib(n-2);

        return ans;
    }
};

int main(){
    Solution solution;
    int n;
    cout<<"Enter the value"<< endl;
    cin>>n;
    cout<<"fibonacci series upto "<< n << " is: " << solution.fib(n) << endl;
    return 0;
}