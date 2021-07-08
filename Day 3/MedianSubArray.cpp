/*
You have been given an array/list ‘ARR’ of integers consisting of ‘N’ integers. You are also given a size ‘M’. 
You need to display the median of all the subarrays of size ‘M’ and it is starting from the very left of the array.
Median is the middle value in an ordered integer array/list. If the size of the array/list is even there is no middle element. 
So the median is the mean of two middle values in an even size array/list.
Your task is to return the median of all the subarrays whose size is ‘M’.
Example:
Let’s say you have an array/list [1,4,3,5] and ‘M’ is 3.Then the first subarray of size 3 is [1,4,3] whose median is 3.
Then the second subarray of size 3 is [4,3,5] whose median is 4. Therefore the median of all the subarrays of size 3 is [3.0,4.0].
*/

#include"bits/stdc++.h"
using namespace std;
int main ()
{
  int n, m, i;
  cin >> n >> m;
  int a1[n];
  for (i = 0; i < n; i++)
    {
      cin >> a1[i];
    }
	//loop will run n-m time,no need to iterate every element
  for (i = 0; i <= n - m; i++)
    {
	  // sort the subarray
      sort (a1, a1 + m);
      double med;
	  //even or odd
      if (m % 2 != 0)
	{
	  med = (double (a1[(m + i) / 2]));
	  cout << med << " ";
	}
      else
	{
	  double mid1 = (m + i) / 2.0;
	  int y = round (mid1);
	  int mid2 = y - 1;
	  med = (double (a1[y] + a1[mid2])) /2.0;
	  cout << med << " ";
	}
    }
}
