#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int a = m - l + 1;
    int b = r - m;
    int L[a], R[b];
    for (i = 0; i < a; i++)
        L[i] = arr[l + i];
    for (j = 0; j < b; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < a && j < b) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < a) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < b) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
  void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 int main()
{
    int arr[100];
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    scanf("%d",&arr);
    printf("Given array is \n");
    printArray(arr, arr_size);
    mergeSort(arr, 0, arr_size - 1);
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
