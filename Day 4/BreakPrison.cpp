#include"bits/stdc++.h"
using namespace std;
int main(){
	int n,i;
	int maxi=INT_MIN;
	int mini=INT_MAX;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>> a[i];
	}
	for(i=0;i<n;i++){
		maxi=max(maxi,a[i]);
		mini = min(mini,a[i]);
	}
	cout<< maxi<<" "<<mini<<" ";
	
}
