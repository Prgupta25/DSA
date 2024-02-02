// vector(vector) indicates the same thing as array arr[][]
#include <iostream> 
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;

    for(int col=0; col<mCols; col++){
        if(col&1){
            // odd index --> bottom to top

            for(int row=nRows-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0; row<nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}


int main() {
    // Input matrix (2D vector)
    vector<vector<int>> arr = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    // Get the number of rows and columns
    int nRows = arr.size();
    int mCols = arr[0].size();

    // Call the wavePrint function
    vector<int> result = wavePrint(arr, nRows, mCols);

    // Print the result
    cout << "Wave Print of the matrix:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
