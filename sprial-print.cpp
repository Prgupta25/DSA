// approch
// print
// * print starting row
// * ending column
// * ending row
// * starting column

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        // index initialization
        int startingRow = 0;
        int startingCol = 0;
        int endingCol = col - 1;
        int endingRow = row - 1;

        while (count < total) {
            // Print startingRow
            for (int index = startingCol; count < total && index <= endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            // Print endingRow
            for (int index = startingRow; count < total && index <= endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // Print endingCol
            for (int index = endingCol; count < total && index >= startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            // Print startingCol
            for (int index = endingRow; count < total && index >= startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};

int main() {
    // Input matrix (2D vector)
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    // Create a Solution object
    Solution sol;

    // Call the spiralOrder function
    vector<int> result = sol.spiralOrder(matrix);

    // Print the result
    cout << "Spiral Order of the matrix:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}

