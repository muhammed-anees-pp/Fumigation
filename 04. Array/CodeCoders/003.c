//Write a program to find the sum of all elements of an array

#include <stdio.h>
int main(){
	int limit,value[100],i,sum=0;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the elements of array:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
		sum+=value[i];
	}
	printf("Sum of the array elements is %d",sum);

	return 0;
}