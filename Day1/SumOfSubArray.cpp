/*Given an array a[] of size n. Output sum of each subarray of the given array.
input:
array = 1 2 2
output:
1=1
1+2 =3
1+2+2=5
2= 2
2+2=4
2= 2

*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,n,sum;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+a[j];
			cout<< sum<<endl;
		}
	}
}

	


