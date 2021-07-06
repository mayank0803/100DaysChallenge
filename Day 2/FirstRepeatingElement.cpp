/* Given an array of integers, find the first repeating element in it.
 We need to find the element that occurs more than once and whose index 
 of first occurrence is smallest
 
 Input:  arr[] = {10, 5, 3, 4, 3, 5, 6}
Output: 5 [5 is the first element that repeats]

Input:  arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
Output: 6 [6 is the first element that repeats]


A Simple Solution is to use two nested loops. The outer loop picks an element one by one,
the inner loop checks whether the element is repeated or not. Once we find an element that 
repeats, we break the loops and print the element. Time Complexity of this solution is O(n2).
NT USED THIS SOLUTION

THIS SOLUTION IS OF O(n)
 */
#include"bits/stdc++.h"
using namespace std;
int main(){
	int i,n,min=INT_MAX;
	const int N =1e6+2;
	cin>> n;
	int a[n];
	int b[N];
	for(i=0;i<n;i++){
		cin>> a[i];
	}
	// another array with -1
	for(i=0;i<N;i++){
		b[i]=-1;
	}
	//storing the index value of array "a" in array "b" if no. is not repeated
	for(i=0;i<n;i++){
		if(b[a[i]] == -1){
			b[a[i]]=i;
		}
		//If no. is found again then store the index
		else{
			if(min>b[a[i]]){
				min=b[a[i]];
			}
		}
	}
	if(min == INT_MAX){
		cout << "-1 ";	
	}else{
	cout << min <<endl<< a[min]<<endl;
	}
}
