//Given an array A[0,……,n-1], where each element of the array represents a vote
//in the election. Assume that each vote is given as an integer representing the ID of the chosen
//candidate. Give an algorithm for determining who wins the election. Example :A[10, 12, 1,
//14, 6, 5, 8, 15, 3, 9, 7, 4, 11, 13, 2].
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
{
      int arr[]={ 10, 12, 1,14, 6, 5, 8, 15, 3, 9, 7, 4, 11, 13, 2};
      int n=sizeof(arr)/sizeof(arr[0]);
      selectionSort(arr, n);
      printf("%d ", arr[n-1]);
      return 0;
}





