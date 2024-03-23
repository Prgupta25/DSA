#include<bits/stdc++.h>
using namespace std;
int getsum(int *arr, int size){

    // base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        int remainingpart = getsum(arr+1, size-1);
        int sum = arr[0] + remainingpart;
        return sum;
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size;i++){
        cout<<"Enter the elements :";
        cin>>arr[i];
    }

    int sum = getsum(arr, size);
    cout<<"Sum is :"<<sum<<endl;
    return 0;

}