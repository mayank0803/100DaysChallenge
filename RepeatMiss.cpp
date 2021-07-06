/* Given an unsorted array of size n. Array elements are in the range from 1 to n.
 One number from set {1, 2, …n} is missing and one number occurs twice in the array.
  Find these two numbers.

Examples: 

 Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3
Explanation: In the array, 
2 is missing and 3 occurs twice 

Input: arr[] = {4, 3, 6, 2, 1, 1}
Output: Missing = 5, Repeating = 1
*/
#include"bits/stdc++.h"
using namespace std;
int main(){
	int i,n;
	cin>> n;
	int a[n];
	int b[n];
	for(i=0;i<n;i++){
		cin>> a[i];
	}
	// another array with -1
	for(i=1;i<n;i++){
		b[i]=-1;
	}
	for(i=1;i<n;i++){
		if(b[a[i]] == -1){
			b[a[i]]=i;
		}
		//If no. is found again then store the index
		else{
			cout<< "repeating no is:- "<< a[i];
			}
		}
		for(i=1;i<n;i++){
			if(b[i]==-1){
				cout<<"missing no. is:- "<<i;
			}
		}
	}
