#include <bits/stdc++.h>
using namespace std;
 
vector<int> calculateSpan(int arr[], int n)
{
    stack<int> s;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        while (!s.empty() and arr[s.top()] <= arr[i])
            s.pop();
 
        if (s.empty())
            ans.push_back(i + 1);
        else {
            int top = s.top();
            ans.push_back(i - top);
        }
        s.push(i);
    }
 
    return ans;
}
 
void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

int main()
{
    int price[] = { 10, 4, 5, 90, 120, 80 };
    int n = sizeof(price) / sizeof(price[0]);
    int S[n];

    vector<int> arr = calculateSpan(price, n);
    printArray(arr);
 
    return 0;
}