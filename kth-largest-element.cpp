#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;    //min_queue
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};
int main() {
    vector<int> nums = {3, 1, 4, 2, 5};
    int k = 3; 

    solution sol;
    
    cout << "The " << k << "3rd largest element is: " << sol.findKthLargest(nums, k) << endl;

    return 0;
}