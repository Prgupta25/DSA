#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
    cout<<"Size of the array"<< n<<endl; 

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearsearch(int arr[], int size, int k){
    print(arr,size);
    if(size == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingpart = linearsearch(arr+1, size-1, k);
        return remainingpart;
    }
}
int main(){
    int arr[5]= {7,4,2,1,5};
    int size = 5;
    int k = 6;

    int ans = linearsearch(arr,size,k);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}