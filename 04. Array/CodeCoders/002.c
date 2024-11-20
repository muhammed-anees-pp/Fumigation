//Write a program to read n number of values in an array and display them in reverse order

#include <stdio.h>
int main(){
	int limit,value[100],i,temp;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the elements of array:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	
	for(i=0;i<limit/2;i++){
		temp=value[i];
		value[i]=value[limit-1-i];
		value[limit-1-i]=temp;
	}
	printf("Reversed array: ");
	for(i=0;i<limit;i++){
		printf("%d ",value[i]);
	}

	return 0;
}