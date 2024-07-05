#include<stdio.h>
int main ()
{
    int arr[]={3, 1, 4, 5, 9, 2, 6, 5};
    int temp,i,n;
    n=sizeof(arr)/sizeof(arr[0]);
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
    for(i=0;i<n;i++)
    {
      printf("%d\t",arr[i]);
    }
}
