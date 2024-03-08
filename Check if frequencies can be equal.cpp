#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool sameFreq(string s) {
        unordered_map<char, int> h;
        unordered_map<int, int> a;

        for (char c : s) {
            h[c]++;
        }

        for (auto &entry : h) {
            a[entry.second]++;
        }

        if (a.size() == 1) {
            return true;
        } else if (a.size() == 2) {
            auto it = a.begin();
            int freq1 = it->first, count1 = it->second;
            ++it;
            int freq2 = it->first, count2 = it->second;

            if ((count1 == 1 && (freq1 - freq2 == 1 || freq1 == 1)) ||
                (count2 == 1 && (freq2 - freq1 == 1 || freq2 == 1))) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    string str = "xxxyyz";
    Solution obj;
    if (obj.sameFreq(str)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
