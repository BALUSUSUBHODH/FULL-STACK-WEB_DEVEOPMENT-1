int main()
{
int arr[]={7, 1, 3, 4, 10, 9, 8, 6, 5, 2};
int  i,j,n,temp;
int pass=0,comp=0,swaps=0;
n=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<n-1;i++)
{
    pass+=1;
    for(j=0;j<n-i-1;++j)
   {
       comp+=1;
       if(arr[j]>arr[j+1])
       {
         swaps+=1;
         temp=arr[j];
         arr[j]= arr[j+1];
         arr[j+1]= temp;
       }
    }
}
 for(i=0;i<n;i++)
   {
    printf("%d  ",arr[i]);
    }
    printf("\n passes %d\n  comparisions %d \n Exchanges %d",pass,comp,swaps);
}
