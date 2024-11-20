//Copy of array elements into another array

#include <stdio.h>
int main(){
	int limit,num[100],arr[100],i;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements: ");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
		arr[i]=num[i];
	}
	/*for(i=0;i<limit;i++){
		arr[i]=num[i];
	}*/
	printf("Copy of the array: ");
	for(i=0;i<limit;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}