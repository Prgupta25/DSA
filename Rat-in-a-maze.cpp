#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution{
    public:
    void helper(vector<string> &ans, string osf, vector<vector<bool>> &vis, int i, int j, vector<vector<int>> &m, int n){
        if(i>=n || j>=n || i<0 || j<0 || m[i][j]==0 || vis[i][j]==true){
            return;
        }
        if(i==n-1 && j==n-1){
            ans.push_back(osf);
            return;
        }
        vis[i][j]=true;
        helper(ans,osf+'R',vis,i,j+1,m,n);
        helper(ans,osf+'D',vis,i+1,j,m,n);
        helper(ans,osf+'L',vis,i,j-1,m,n);
        helper(ans,osf+'U',vis,i-1,j,m,n);
        vis[i][j]=false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        string osf="";
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        helper(ans,osf,vis,0,0,m,n);
        return ans;
        
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<vector<int>> matrix = {
        {1, 0, 1},
        {1, 1, 1},
        {0, 1, 1}
    };
    int n = 3;

    vector<string> result = solution.findPath(matrix, n);

    // Printing the result
    cout << "Possible paths in the matrix:" << endl;
    for (const auto& path : result) {
        cout << path << endl;
    }

    return 0;
}
