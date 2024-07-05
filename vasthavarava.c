//Sort the elements 77,49,25,12,9,33,56,81 use the below sorting techniques
//selection sort
#include<stdio.h>
 void swap(int *a, int *b)
 {
   int temp = *a;
   *a = *b;
   *b = temp;
 }

void selectionSort(int arr[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (arr[i] < arr[min_idx])
        min_idx = i;
    }
    swap(&arr[min_idx], &arr[step]);
  }
}


int main()
{     int i;
      int arr[]={77,49,25,12,9,33,56,81};
      int n=sizeof(arr)/sizeof(arr[0]);
      selectionSort(arr, n);
      for(i=0;i<n;i++)
        {
          printf("%d ",arr[i]);
       }
      return 0;
}
