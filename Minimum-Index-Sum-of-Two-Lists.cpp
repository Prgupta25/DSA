#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;
        for (int i = 0; i < list2.size(); ++i) 
            mp[list2[i]] = i;
        
        int mi = 2000;
        vector<string> ans;
        
        for (int i = 0; i < list1.size(); ++i) {
            if (mp.count(list1[i])) {
                int t = i + mp[list1[i]];
                if (t < mi) {
                    ans.clear();
                    ans.push_back(list1[i]);
                    mi = t;
                } else if (t == mi) {
                    ans.push_back(list1[i]);
                }
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<string> list1 = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
    vector<string> list2 = {"KFC", "Shogun", "Burger King"};
    
    vector<string> result = solution.findRestaurant(list1, list2);

    cout << "Common favorite restaurants are: ";
    for (const string& restaurant : result) {
        cout << restaurant << " ";
    }

    return 0;
}
