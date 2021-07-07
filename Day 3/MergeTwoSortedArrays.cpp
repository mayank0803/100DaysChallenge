#include"bits/stdc++.h"
using namespace std;
int main(){
	int n,m,i;
	cin >> n>> m;
	int a1[n];
	int a2[m];
	for(i=0;i<n;i++){
		cin>>a1[i];
	}
	cout<<"2nd array"<<endl;
	for(i=0;i<m;i++){
		cin>>a2[i];
	}
	i=0;
	int j=0;
	while(i<n){
		if(a1[i]>a2[j]){
			swap(a1[i],a2[j]);
			sort(a2,a2+m);
			i++;
		}
		else{
			i++;
		}
	}
	
	for (int i = 0; i < n; ++i)
        cout << a1[i] << " ";
        
    for (int i = 0; i < m; ++i)
        cout << a2[i] << " ";
}

