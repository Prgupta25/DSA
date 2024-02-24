#include<bits/stdc++.h>
#include<limits>
using namespace std;
class Solution{
    public:
    int maxSum(int n){
    if(n==0 || n==1)
        return n;
    return max((maxSum(n/2)+ maxSum(n/3)+ maxSum(n/4)), n);
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<< sol.maxSum(n);
    return 0;
}