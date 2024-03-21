#include <iostream>
#include <climits>

using namespace std;

int largestarea(int arr[], int n) {
  int maxArea = 0;
  for (int i = 0; i < n; i++) {
    int minHeight = INT_MAX;
    for (int j = i; j < n; j++) {
      minHeight = min(minHeight, arr[j]);
      maxArea = max(maxArea, minHeight * (j - i + 1));
    }
  }
  return maxArea;
}

int main() {
  int n;
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout<< largestarea(arr, n) << endl;

  delete[] arr;

  return 0;
}
