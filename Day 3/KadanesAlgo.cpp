#include"bits/stdc++.h"
using namespace std;
int main(){
	int n,m,i;
	cin >> n;
	int a1[n];
	int sum=0,maximum=INT_MIN;
	for(i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	for(i=0;i<n;i++){
		sum= sum+a1[i];
		maximum = max(sum,maximum);
		if(sum<0)
			sum=0;
	}
	cout<<maximum;
}

