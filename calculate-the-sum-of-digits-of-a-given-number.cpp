#include<bits/stdc++.h>
using namespace std;
int sumofdigits(int n){
    if(n >=0 && n <= 9){              // for the single digit
        return n;
    }

    int ans = n%10 + sumofdigits(n/10);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int sum = sumofdigits(n);
    cout<<"sum of digits of " << n <<" is :" << sum <<endl;
    return 0;

}