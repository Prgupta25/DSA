// fibonacci series 
// 0 1 1 2 3 5 8 13 21 --------
// find 8th element of fabonacci series
// that's 13 
#include<bits/stdc++.h>
using namespace std;
int fbi(int n){
    // base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int ans = fbi(n-1) + fbi(n-2);
    return ans;
}
int main() {
    int m;
    cout << "Enter the value of n: ";
    cin >> m;

    cout << "Fibonacci Sequence up to " << m << " terms: ";
    for (int i = 0; i < m; ++i) {
        // cout << fbi(i) << " ";
    }
    cout << endl;
    cout<<fbi(8)<<endl;

    return 0;
}