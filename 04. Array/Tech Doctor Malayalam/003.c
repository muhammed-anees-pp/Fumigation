//Sum of the even numbers in an array

Ans:

#include <stdio.h>
int main(){
	int limit,num[100],i,sumEven=0,sumOdd=0;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements: ");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<limit;i++){
		if(num[i]%2==0){
			sumEven=sumEven+num[i];
		}
	}

	printf("Sum of even numbers: %d",sumEven);

	return 0;
}