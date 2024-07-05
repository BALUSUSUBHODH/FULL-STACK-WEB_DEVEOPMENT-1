 //Given an array sort it using insertion sort and binary search in to to find the
//position of an element.
//Input: 5,12,-5,0,16,57,89,13,23
int main ()
 void binarySearch(int arr[], int x, int low, int high)
    {
     while (low <= high)
     {  int mid;
        mid = low+(high-low)/2;
        if (arr[mid]==x)
            printf("%d ",mid);
        if (arr[mid]<x)
          low = mid + 1;
        else
        high = mid - 1;
    }
   }

{
    int arr[]={5,12,-5,0,16,57,89,13,23};
    int temp,i,n,s;
    n=sizeof(arr)/sizeof(arr[0]);
    printf("enter search:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {

      temp=arr[i];
      int j=i-1;
      while(temp<arr[j] && j>=0)
      {
        arr[j + 1] = arr[j];
        --j;
      }
      arr[j + 1] = temp;
    }

    binarySearch(array, s, 0, n-1);
}
