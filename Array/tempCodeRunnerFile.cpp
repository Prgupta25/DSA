#include<iostream>
using namespace std;
int sum=0;
pair<int,int> subarray(int arr[],int n, int k, int target){
     for(int i=0; i<=n-k; i++){
        for(int j=i; j<k+i; j++){
            sum+=arr[j];
        }
        if(sum == target){
            return {i, i+k-1};
        }
    }
    return{-1,-1};
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int target;
    cin>>target;
    int sum=0;
    pair<int,int> p=subarray(arr,n,k,target);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;

}