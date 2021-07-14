void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int i=0;
        int j=n-1;
        while(true)
        {
            while(i<n && arr[i]<0)
            {
                i++; //stops at firdt positive number from the beginning
            }
            while(j<n && arr[j]>0)
            {
                j--; //stop at first negative number from the end
            }
            if(i<j)
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            else
            {
                break;
            }
            
        }
    }
