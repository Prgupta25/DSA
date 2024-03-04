#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<long long> nextLargerElement(vector<long long> arr, int n) {
        vector<long long> ans;
        stack<long long> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[i] >= st.top()) {
                st.pop();
            }
            if (st.empty()) {
                ans.push_back(-1);
            } else {
                ans.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution sol;
    vector<long long> arr = {4, 3, 2, 1};
    int n = arr.size();
    vector<long long> result = sol.nextLargerElement(arr, n);
    
    cout << "Next greater elements are: ";
    for (long long num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}