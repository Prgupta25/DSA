#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    /**
     * Iteration
     * Time Complexity: BigO(N^2)
     * Space Complexity: BigO(1)
     */
    std::vector<std::string> findWords(std::vector<std::string>& words) {
        std::unordered_set<std::string> row1 {
            "q", "w", "e", "r", "t", "y", "u", "i", "o", "p"
        };
        std::unordered_set<std::string> row2 {
            "a", "s", "d", "f", "g", "h", "j", "k", "l"
        };
        std::unordered_set<std::string> row3 {
            "z", "x", "c", "v", "b", "n", "m"
        };

        std::vector<std::string> ans;

        for(const std::string& w : words) {
            std::string word = toLowerCase(w);
            if (row1.find(word.substr(0, 1)) != row1.end()) {
                if (valid(row1, word)) {
                    ans.push_back(w);
                }
            } else if (row2.find(word.substr(0, 1)) != row2.end()) {
                if (valid(row2, word)) {
                    ans.push_back(w);
                }
            } else {
                if (valid(row3, word)) {
                    ans.push_back(w);
                }
            }
        }
        return ans;
    }

private:
    bool valid(const std::unordered_set<std::string>& dict, const std::string& word) {
        bool isValid = true;
        for (char ch : word) {
            std::string charStr(1, ch);
            if (dict.find(charStr) == dict.end()) {
                isValid = false;
            }
        }
        return isValid;
    }

    std::string toLowerCase(const std::string& str) {
        std::string lowerStr = str;
        for (char& ch : lowerStr) {
            ch = tolower(ch);
        }
        return lowerStr;
    }
};