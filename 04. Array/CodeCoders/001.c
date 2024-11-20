//Write a program to store and print elements in an array. How to rad and print elements of an array in any size

#include <stdio.h>
int main(){
	int limit,i;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	int value[limit];
	printf("Enter the elements of array: ");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	
	printf("Array: ");
	for(i=0;i<limit;i++){
		printf("%d ",value[i]);
	}

	return 0;
}