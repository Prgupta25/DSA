#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string str) {
        unordered_map<char, int> exists;
        string ans = "";
        for (char c : str) {
            if (exists.find(c) == exists.end()) {
                ans.push_back(c);
                exists[c]++;
            }
        }
        return ans;
    }
};

int main() {
    string s = "geeksforgeeks";
    Solution sol;
    cout << sol.removeDuplicates(s) << endl;
    return 0;
}
