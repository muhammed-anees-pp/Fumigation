//Find the sum of all elements of the array

#include <stdio.h>
int main(){
	int limit,num[100],i,sum=0;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	printf("Sum of the array elements: %d",sum);

	return 0;
}