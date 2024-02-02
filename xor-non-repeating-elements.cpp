#include<iostream>
#include<vector>
using namespace std;
int first_1bit(int n){
    int count=0;
    while(n){
        if(n&1){
            break;
        }
        n=n>>1;
        count++;
    }
}

void findnumber(vector<int> vec){
    int Xor = 0;
    for(int i=0; i<vec.size(); i++){
        Xor = Xor^vec[i];
    }
    int k = first_1bit(Xor);
    int xor1 =0;
    int xor2 =0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]&(1<<k)){
            xor1 = xor1^vec[i];
        }
        else{
            xor2 = xor2^vec[i];
        }
    }
    cout<<"first number:"<<xor1<<endl;
    cout<<"second number:"<<xor2<<endl;
}
int main(){
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i=0; i<vec.size(); i++){
        cin>> vec[i];
    }
    findnumber(vec);
    return 0;


}