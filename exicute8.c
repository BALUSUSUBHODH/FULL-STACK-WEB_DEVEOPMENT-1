//Develop an algorithm for Quick Sort and trace the steps for sorting the following
//list, and derive the time complexity. 65, 70, 75, 80, 85, 60, 55, 50, 45.
#include<stdio.h>
int main()
{
      int i,low,high;
      int arr[]={65, 70, 75, 80, 85, 60, 55, 50, 45};
      int n=sizeof(arr)/sizeof(arr[0]);
      partition(arr,low,high);
      return 0;
}
partition(arr ,low , high) {

pivot=arr[low];

start=low;

end=high;

while(start<end) {

while(a[start]<=pivot) {

start++; }

while(a[end]>pivot) {

end-- ; }

if(start<end)
    {
     swap(a[start],a[end]);
}
}
swap(a[low],a[end]);
 return end;

}
