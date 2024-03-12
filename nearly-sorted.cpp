#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector <int> nearlySorted(int arr[], int num, int K){
        vector<int> vec;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<num;i++ ){
            pq.push(arr[i]);
            if(pq.size()>K){
                vec.push_back(pq.top());
                pq.pop();
            }
        }
        while(!pq.empty()){
            vec.push_back(pq.top());
            pq.pop();
        }
        return vec;
    }
};

int main() {
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int num = sizeof(arr) / sizeof(arr[0]);
    int K = 3; 

    solution sol;
    vector<int> result = sol.nearlySorted(arr, num, K);
    cout << "Array after nearly sorted: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}