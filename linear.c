#include<stdio.h>
void main(){
	int n,i;
	int arr[n];
    int target;
    printf("enter array elements size:")
	scanf("%d",&n);
	printf("enter array elements:")
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("array elements:")
    for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("enter target element:")
    scanf("%d",&target);
	for(i=0;i<n;i++){
		if(arr[i]==target){
			printf("%d",i);
		}
	}
}
