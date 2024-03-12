#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int laststoneweight(vector<int>&stones){
        priority_queue<int> pq;    //max-heap
        for(auto i:stones){                           //for(auto) means for each element in a loop
            pq.push(i);
        }
         while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x!=y){
                pq.push(x-y);
            }
        }
        return pq.size()==0?0:pq.top();
    }
};
int main(){
    solution sol;
    vector<int> stones = {2,7,4,1,8,1};
    cout<<"Last stone weight: "<< sol.laststoneweight(stones) << endl;
    return 0;
}