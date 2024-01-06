#include <iostream>
using namespace std;

int *WaveArray(int arr[], int n)
{
  sort(arr, arr + n);
  for (int i = 0; i < n; i += 2)
  {
    swap(arr[i], arr[i + 1]);
  }
  return arr;
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {4, 6, 2, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Lexographycally smallest wave array is" << endl;
  int *wave_array = WaveArray(arr, n);
  printArray(wave_array, n);
  return 0;
}