/* Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array.
The functions should put all 0s first, then all 1s and all 2s in last.
Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
*/
#include"bits/stdc++.h"
using namespace std;
int main()
	{
		int i,n,c0=0,c1=0,c2=0;
		cin>> n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>> a[i];
		}
		// count all the 0,1,2
		for(i=0;i<n;i++)
		{
			if(a[i]==0)
			{
				c0++;
			}
			else if(a[i]==1)
			{
				c1++;
			}
			else
			{
				c2++;
			}
		}
		i=0;
		// Store all the 0s in the beginning
	    while (c0 > 0) 
		{
	        a[i++] = 0;
	        c0--;
	    }
	 
	    // Then all the 1s
	    while (c1 > 0)
		 {
	        a[i++] = 1;
	        c1--;
	    }
	 
	    // Finally all the 2s
	    while (c2 > 0) 
		{
	        a[i++] = 2;
	        c2--;
	    }
		for(i=0;i<n;i++)
		{
			cout << a[i]<< " ";
		}
	}	
	
