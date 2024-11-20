//Write a program to copy the elements of one array into another array

#include <stdio.h>
int main(){
	int limit,value[100],copy[100],i;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the elements of array:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
		copy[i]=value[i];
	}
	
	printf("Copy of the array: ");
	for(i=0;i<limit;i++){
		printf("%d ",copy[i]);
	}


}