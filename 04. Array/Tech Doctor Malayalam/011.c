//Reverse an array without using an additional array

#include <stdio.h>
int main(){
	int limit,num[100],i,temp;
	printf("Enter the size of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}

	for(i=0;i<limit/2;i++){
		temp=num[i];
		num[i]=num[limit-1-i];
		num[limit-1-i]=temp;
	}
	printf("Reversed array: ");
	for(i=0;i<limit;i++){
		printf("%d ",num[i]);
	}



	return 0;
}




