// Input : str = "abaab"
// Output: 3
// Explanation : 
// All palindrome substring are :
//  "aba" , "aa" , "baab" 

// Input : str = "abbaeae"
// Output: 4
// Explanation : 
// All palindrome substring are : 
// "bb" , "abba" ,"aea","eae"

// Initial Values : i = 0, j = n-1;
// Given string 'str'

// CountPS(i, j)
   
   // If length of string is 2 then we 
   // check both character are same or not 
//    If (j == i+1)
//       return str[i] == str[j]
   // this condition shows that in recursion if i crosses
   // j then it will be a invalid substring or
   // if i==j that means only one character is remaining 
   // and we require substring of length 2 
   //in both the conditions we need to return 0
//    Else if(i == j ||  i > j) return 0;
//    Else If str[i..j] is PALINDROME 
      // increment count by 1 and check for 
      // rest palindromic substring (i, j-1), (i+1, j)
      // remove common palindrome substring (i+1, j-1)
    //   return  countPS(i+1, j) + countPS(i, j-1) + 1 -
    //                                countPS(i+1, j-1);

    // Else // if NOT PALINDROME 
       // We check for rest palindromic substrings (i, j-1)
       // and (i+1, j)
       // remove common palindrome substring (i+1 , j-1)
    //    return  countPS(i+1, j) + countPS(i, j-1) - 
    //                          countPS(i+1 , j-1);






#include <bits/stdc++.h>
using namespace std;
 
int CountPS(char str[], int n)
{
  int ans=0;
    bool P[n][n];
    memset(P, false, sizeof(P));
 
    for (int i = 0; i < n; i++){
        P[i][i] = true;
    }
    for (int gap = 2; gap <=n; gap++) {
        for (int i = 0; i <= n-gap; i++) {
            int j = gap + i-1;
            if(i==j-1){
              P[i][j]=(str[i]==str[j]);
            }else {
              P[i][j]=(str[i]==str[j] && P[i+1][j-1]);
            }
          if(P[i][j]){
            ans++;
          }
        }
    }
    return ans;
}
int main()
{
    char str[] = "abaab";
    int n = strlen(str);
    cout << CountPS(str, n) << endl;
    return 0;
}