//Swapping every pair of adjacent elements in an array

#include <stdio.h>
int main(){
	int limit,i,num[100],temp;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements: ");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}

	for(i=0;i<limit;i+=2){
		temp=num[i];
		num[i]=num[i+1];
		num[i+1]=temp;
	}

	printf("Swapped array: ");
	for(i=0;i<limit;i++){
		printf("%d ",num[i]);
	}


	return 0;
}

/*
Working:

1 2 3 4 5 6

Iteration 1 (i=0)
temp=num[0](1) | num[0]=num[0+1](2) | num[1]=temp(1)
Array: 2 1 3 4 5 6

Iteration 2 (i=2)
temp=num[2](3) | num[2]=num[2+1](4) | num[3]=temp(3)
Array: 2 1 4 3 5 6

Iteration 3 (i=4)
temp=num[4](5) | num[4]=num[4+1](6) | num[5]=temp(5)
Array: 2 1 4 3 6 5
*/