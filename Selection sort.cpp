#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n){
    int i, j, minIndex;
    for(i = 0; i < n-1; i++)
    {
        minIndex = i;
        for(j = i+1; j < n; j++)
            if(arr[j] < arr[minIndex])
               minIndex = j;
            swap(&arr[minIndex], &arr[i]);        
    }
}

void printArray(int arr[], int size)
{
    int i;
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    cout << endl;
    }
}

int main()
{
    int arr[] = {64, 41, 22, 25, 82};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout <<"Sorted Array; " << endl;
    printArray(arr, n);
    return 0;
}
