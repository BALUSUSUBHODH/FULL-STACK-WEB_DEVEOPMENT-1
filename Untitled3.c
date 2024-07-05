#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int a = m - l + 1;
    int b = r - m;
    int left[a], right[b];
    for (i = 0; i < a; i++)
        left[i] = arr[l + i];
    for (j = 0; j < b; j++)
        right[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i > a && j > b) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i > a) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j > b) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void merge(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        merge(arr, l, m);
        merge(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
  void print(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 int main()
{
    int a[] = { 2,3,4,6,13,25 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Given array is \n");
    print(a, size);
    merge(a, 0, size - 1);
    printf("\nSorted array is \n");
    print(a, size);
    return 0;
}
