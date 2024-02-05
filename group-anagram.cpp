#include<iostream>
#include<vector>
#include<unordered_map>
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(auto s:strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }
        for(auto m:mp){
            ans.push_back(m.second);
        }
        return ans;
    }
};
int main() {
    Solution sol;

    // Example input
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};

    // Call the groupAnagrams function
    vector<vector<string>> result = sol.groupAnagrams(input);

    // Print the result
    cout << "Anagram Groups:" << endl;
    for (const auto& group : result) {
        cout << "[ ";
        for (const string& str : group) {
            cout << str << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}