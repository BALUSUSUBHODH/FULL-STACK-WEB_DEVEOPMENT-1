//Given an array A[0,……,n-1] of n numbers containing the repetition of some
//number. Give an algorithm for checking whether there are repeated elements are not. Assume
//that we are not allowed to use additional space(we can use a few temporary variables,O(1)
//storage.
int main()
{
  int arr[];
  int i,n;
  printf("Enter size of array:")
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
 }
