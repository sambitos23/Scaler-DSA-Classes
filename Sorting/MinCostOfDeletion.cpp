#include <iostream>
using namespace std;

int MinCostOfDeletion(int arr[], int n)
{
  sort(arr, arr + n);
  int minCost = 0;
  for (int i = 0; i < n; ++i)
  {
    minCost += arr[i] * (n - i);
  }
  return minCost;
}

int main()
{
  int arr[] = {2, 4, 6, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int minCost = MinCostOfDeletion(arr, n);
  cout << "Minimum Cost of Deleting Elements is: " << minCost;
  return 0;
}