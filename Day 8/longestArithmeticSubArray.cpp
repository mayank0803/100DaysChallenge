#include<iostream>
using namespace std;
int main()
{
	int n;
	int i,sum=0,s;
	cin>> n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>> arr[i];
	}
        if(arr[0]<= arr[n-1]){
        	
            for(i=1;i< n-1;i++){
            	
                s=(arr[0]-arr[i]);
                if(s>0){
                	sum=sum+s;
				}
            }
            
        }
        if(arr[0]>arr[n-1]){
        	
        	for(i=1;i< n-1;i++){
                sum=sum+(arr[n-1]-arr[i]);
            }
		}
		
        cout<<sum;
}
	
