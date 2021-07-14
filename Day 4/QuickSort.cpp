void quickSort(int arr[], int low, int high)
{
    // code here
    if(low<high)
    {
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}
    
int partition (int arr[], int low, int high)
{
   // Your code here
   int i=low-1;
   int pivot=arr[high];
   for(int j=low;j<=high-1;j++)
   {
       if(arr[j]<pivot)
       {
           i=i+1;
           int t=arr[i];
           arr[i]=arr[j];
           arr[j]=t;
       }
   }
   int t=arr[high];
   arr[high]=arr[i+1];
   arr[i+1]=t;
   return(i+1);
}
