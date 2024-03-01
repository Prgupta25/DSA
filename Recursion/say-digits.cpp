// example 412
// print four one two
#include<bits/stdc++.h>
using namespace std;
void sayDigit(int n, string arr[]){
    if(n == 0){
        return;
    }
    // processing
    int digit = n%10;
    n=n/10;

    // recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";
}

int main(){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin>>n;

    cout<< endl << endl << endl;
    sayDigit(n, arr);
    cout<< endl << endl << endl;
}
