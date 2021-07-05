/* 
Isyana is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is Vi

. A day is record breaking if it

satisfies both of the following conditions:
? The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.
? Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Vi
.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the number of record breaking days.
*/
#include<iostream>
using namespace std;
int main()
{
	int i,c=0,n;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int max=a[0];
	a[n]=-1;
	if(a[0]>a[1])
	{
		c++;
	}
	for(i=0;i<n;i++){
		if(a[i]>max && a[i]>a[i+1]){
			max=a[i];
			c++;
		}
 }
	if(a[n]>max){
		c++;
	}
	cout<< c<<endl;
	
}
