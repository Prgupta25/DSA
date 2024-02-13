#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void helper(set<vector<int>> &st,vector<int> &can,int &t,vector<int> osf,int sum){
    if(sum==t){
        sort(osf.begin(), osf.end());
        st.insert(osf);
        return;
    }
    if(sum>t){
        return;
    }
    for(int i=0; i<can.size(); i++){
        osf.push_back(can[i]);
        sum+=can[i];
        helper(st,can,t,osf,sum);
        sum-=can[i];
        osf.pop_back();
        
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        vector<int> osf;
        helper(st, candidates, target, osf, 0);
        for(auto s:st){
            ans.push_back(s);
        }
        return ans;
    }
};

int main() {
    Solution solution;

    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = solution.combinationSum(candidates, target);

    cout << "Combination sums for target " << target << " are:" << endl;
    for (const auto& combination : result) {
        cout << "[";
        for (size_t i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i != combination.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}