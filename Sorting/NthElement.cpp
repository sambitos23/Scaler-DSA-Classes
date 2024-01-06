// C++ program to demonstrate the use of std::nth_element
#include <algorithm>
#include <iostream>
/*
Advanced of sorting
std::nth_element() is an STL algorithm that rearranges the list in such a way such that the element at the nth position
is the one which should be at that position if we sort the list.
It does not sort the list, just that all the elements, which precede the nth element are not greater than it, and all
the elements which succeed it are not less than it.
*/
using namespace std;
int main()
{
  int v[] = {3, 2, 10, 45, 33, 56, 23, 47}, i;

  // Using std::nth_element with n as 5
  std::nth_element(v, v + 4, v + 8);

  // Since, n is 5 so 5th element should be sorted
  for (i = 0; i < 8; ++i)
  {
    cout << v[i] << " ";
  }
  return 0;
}
