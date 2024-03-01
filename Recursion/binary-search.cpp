#include<bits/stdc++.h>
using namespace std;
bool issorted(int *arr, int size){            //*arr or arr[] is pointer dono ka matlab same hai 
    if(size == 0 || size == 1){               // ||means or 
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingelememts = issorted(arr+1, size-1);
        return remainingelememts;
    }
}
int main(){
    int arr[5] = {7,8,4,1,9};
    int size = 5;

    bool ans = issorted(arr, size);

    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}