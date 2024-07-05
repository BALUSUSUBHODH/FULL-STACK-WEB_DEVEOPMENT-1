//Construct the Selection Sort and trace the iterations for sorting the following
//ist 136, 487, 358, 469, 570, 247, 598, 639, 205, 609.
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
        printarray(arr,size);
    }
    swap(&arr[min_idx], &arr[step]);
  }
}
void printarray(int arr[],int n)
{    int i;
     for(i=0;i<n;i++)
        {
          printf("%d ",arr[i]);
          }
          printf("\n")

}

int main()
{     int i;
      int arr[]={136, 487, 358, 469, 570, 247, 598, 639, 205, 609};
      int n=sizeof(arr)/sizeof(arr[0]);
      selectionSort(arr, n);
      return 0;
}




