// Input : arr[] = {10, 5, 3, 15, 20} 
// Output : 3 
// Explanation: The largest subset is 10, 5, 20.
// 10 is divisible by 5, and 20 is divisible by 10.
// Input : arr[] = {18, 1, 3, 6, 13, 17} 
// Output : 4
// Explanation: The largest subset is 18, 1, 3, 6,
// In the subsequence, 3 is divisible by 1, 
// 6 by 3 and 18 by 6.

#include <bits/stdc++.h>
using namespace std;
 
int largestSubset(int a[], int n)
{
    int maxSubset
        = 1; // variable to store the maximum subset size
             // found so far, initialized to 1
    for (int i = 0; i < (1 << n);
         i++) { // loop through all possible subsets of the
                // input array
        int subsetSize
            = 0; // variable to store the size of the
                 // current subset being considered
        bool validSubset
            = true; // variable to keep track of whether the
                    // current subset is valid or not
        for (int j = 0; j < n;
             j++) { // loop through all elements in the
                    // input array
            if (i & (1 << j)) { // check if the j-th element
                                // is present in the current
                                // subset being considered
                for (int k = j + 1; k < n;
                     k++) { // loop through all elements
                            // after the j-th element
                    if (i
                        & (1
                           << k)) { // check if the k-th
                                    // element is present in
                                    // the current subset
                                    // being considered
                        if (a[j] % a[k] != 0
                            && a[k] % a[j]
                                   != 0) { // check if the
                                           // pair (a[j],
                                           // a[k]) is not
                                           // divisible
                            validSubset
                                = false; // if the pair is
                                         // not divisible,
                                         // mark the current
                                         // subset as
                                         // invalid
                            break; // break out of the inner
                                   // loop since we don't
                                   // need to check any more
                                   // pairs
                        }
                    }
                }
                if (validSubset) { // if the current subset
                                   // is still valid after
                                   // checking all pairs,
                                   // increment the subset
                                   // size
                    subsetSize++;
                }
                else { // if the current subset is not
                       // valid, break out of the outer loop
                       // since we don't need to consider
                       // this subset anymore
                    break;
                }
            }
        }
        maxSubset
            = max(maxSubset,
                  subsetSize); // update the maximum subset
                               // size found so far
    }
    return maxSubset; // return the maximum subset size
                      // found
}
 
int main()
{
    int a[] = {10, 5, 3, 15, 20 }; // sample input array
    int n = sizeof(a)
            / sizeof(a[0]); // size of the input array
    cout << largestSubset(a, n)
         << endl; // call the function and print the result
    return 0;
}