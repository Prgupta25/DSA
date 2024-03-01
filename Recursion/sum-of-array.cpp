#include<bits/stdc++.h>
using namespace std;
int getsum(int *arr, int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    else{
        int remainingelements= getsum(arr+1, size-1);
        int sum= arr[0]+remainingelements;
        return sum;
    }
}
int main(){
    int arr[5]={7,6,4,9,2};
    int size=5;


    int sum = getsum(arr,size);

    cout<<"the sum is "<<sum<<endl;
    return 0;
}