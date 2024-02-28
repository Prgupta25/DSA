// #include<iostream>
// using namespace std;
// void reverse(int arr[],int n){
	
// }
// void deletion(int arr[],int pos ,int &n){
// 	for(int i=pos;i<n;i++){
// 		arr[i]=arr[i+1];
// 	}
// 	n--;
// }
// void insertion(int arr[],int &n,int key,int pos){
// 	for(int i=n;i>=pos;i--){
// 		arr[i]=arr[i-1];
// 	}
// 	arr[pos]=key;
// 	n++;
// }
// int main(){
// 	int arr[]={1,2,3,4,5,6,7,8,9,10};
// 	int n=sizeof(arr)/sizeof(arr[0]);
// 	//key=12,pos=4
// 	int key=12;
// 	int pos=4;
// 	// insertion(arr,n,key,pos);
// 	deletion(arr,pos,n);
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;
// 	return 0;
// }

// method 2

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
	int s=0, e=v.size()-1;

	while(s<=e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}
void print(vector<int> v){
	for(int i=0; i<v.size(); i++){
		cout<< v[i] << " ";
	}
	cout<<endl;
}




int main(){
	vector<int> v;

	v.push_back(11);
	v.push_back(7);
	v.push_back(4);
	v.push_back(3);
	v.push_back(10);
	v.push_back(9);

	vector<int> ans = reverse(v);
	print(ans);

	return 0;

}
