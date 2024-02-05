#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charCount;

        // Count occurrences of each character
        for (char c : s) {
            charCount[c]++;
        }

        // Find the first unique character
        for (int i = 0; i < s.length(); i++) {
            if (charCount[s[i]] == 1) {
                return i;
            }
        }

        // If no unique character found, return -1
        return -1;
    }
};

int main() {
    string word = "";

    cout << "Enter a word: ";
    getline(cin, word);

    // Create a Solution object
    Solution sol;

    // Call the firstUniqChar function
    int result = sol.firstUniqChar(word);

    // Print the result
    if (result != -1) {
        cout << "The index of the first unique character: " << result << endl;
    } 
    else{
        cout << "No unique character found." << endl;
    }
    return 0;
}
