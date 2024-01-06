#include <iostream>
using namespace std;

//

int *InsertionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int j = i;
    while (j >= 0 && arr[j] > arr[j + 1])
    {
      swap(arr[j], arr[j + 1]);
      j--;
    }
  }
  return arr;
}

void FindKthArrayElement(int arr[], int n, int k)
{
  int *arr2 = InsertionSort(arr, n);
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
  cout << "Insertion Sort" << endl;
  FindKthArrayElement(arr, n, k);
  return 0;
}