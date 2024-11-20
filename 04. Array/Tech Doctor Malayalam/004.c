//Sum of the odd numbers in an array

Ans:

#include <stdio.h>
int main(){
	int limit,num[100],i,sumOdd=0;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements: ");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<limit;i++){
		if(num[i]%2==1){
			sumOdd=sumOdd+num[i];
		}
	}

	printf("Sum of odd numbers: %d",sumOdd);

	return 0;
}