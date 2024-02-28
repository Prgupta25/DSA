#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int mat[m][n];
    for(int i=0; i<m; i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int flag= 0;
    for(int j=0; j>n; j++){
        if(flag==0){
            for(int i=0;i<m;i++){
                cout<<mat[i][j]<<" ";
            }
            flag=1;
        }
        else{
            for(int i=m-1; i>=0;i--){
                cout<<mat[i][j]<<" ";
            }
            flag=0;
        }
        return 0;
    }
}