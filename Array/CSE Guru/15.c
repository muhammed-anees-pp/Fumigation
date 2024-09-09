//Rotate the array elements k times. (Left Rotation)

#include <stdio.h>
int main(){
	int limit,num[100],i,j,rotation,temp;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the elements of array: ");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}
	
	printf("How many times you have to rotate: ");
	scanf("%d",&rotation);
	for(i=1;i<=rotation;i++){
		temp=num[0];
		for(j=0;j<limit-1;j++){
			num[j]=num[j+1];
		}
		num[j]=temp;
	}
	
	printf("Array: ");
	for(i=0;i<limit;i++){
		printf("%d ",num[i]);
	}

	return 0;
}

/*
Working:

30 20 40 50 60 80

Rotation=1

Iteration 1 (i=1)
temp=30
j=0 => num[0]=num[1] => num[0]=20
j=1 => num[1]=num[2] => num[1]=40
j=2 => num[2]=num[3] => num[2]=50
j=3 => num[3]=num[4] => num[3]=60
j=4 => num[4]=num[5] => num[4]=80
j=5 => End loop

num[5]=temp => num[5]=30

Array: 20 40 50 60 80
*/