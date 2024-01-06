#include <iostream>
#include <limits.h>
using namespace std;

// Find the Kth minimum elements from the array using selection sort

int *SelectionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int minVal = INT_MAX;
    int minIdx = -1;
    for (int j = i; j < n; j++)
    {
      if (arr[j] < minVal)
      {
        minVal = arr[j];
        minIdx = j;
      }
    }
    swap(arr[minIdx], arr[i]);
  }
  return arr;
}

void FindKthArrayElement(int arr[], int n, int k)
{
  int *arr2 = SelectionSort(arr, n);
  cout << "Sorted array is" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr2[i] << ", ";
  }
  cout << endl;
  cout << k << "th element is " << arr2[k - 1] << endl;
}

int main()
{
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 2;
  cout << "Selection Sort" << endl;
  FindKthArrayElement(arr, n, k);
  return 0;
}