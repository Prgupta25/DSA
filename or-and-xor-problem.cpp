#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the values"<<endl;
    cin>>a;
    cout<<a;
    cin>>b;
    cout<<b;
    c=a^b;
    cout<<"Applying xor operation on a and b"<<endl;
    cout<<"a^b"<<c<<endl;
    return 0;
}




















// void dectobinary(int x, int y){
//         int binaryNum[32];
//         int i = 0;
//         while(i>0){
//             binaryNum[i]=(x,y)%2;
//             (x,y)=(x,y)/2;
//             i++;
//             for(int j=i-1; j>=0; j--){
//                 cout<<binaryNum[j];
//             }
//         }
//     }
// int myxor(int x, int y){
//     return (x | y) & (~x | ~y);
// }
// int main(){
//     int x, y;
//     cin>>x, y;
//     dectobinary(x,y);
//     cout<<"XOR is"<< myxor(x,y) <<endl;
//     return 0;
// }