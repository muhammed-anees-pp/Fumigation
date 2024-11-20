//Insert New value in an unsorted array at a specific position

#include <stdio.h>
int main(){
	int limit,num[100],i,value,position;
	printf("Enter the size of the array: ");
	scanf("%d",&limit);
	printf("Enter the elements of the array:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}
	
	printf("Enter the value that you want to add: ");
	scanf("%d",&value);
	printf("Which position that you want to add: ");
	scanf("%d",&position);

	for(i=limit;i>position-1;i--){
		num[i]=num[i-1];
	}
	num[position-1]=value;
	printf("Final Array: ");
	for(i=0;i<=limit;i++){
		printf("%d ",num[i]);
	}

	return 0;
}

/*
The array after shifting:
Step 1: num[5] = num[4] → [10, 20, 30, 40, 50, 50]
Step 2: num[4] = num[3] → [10, 20, 30, 40, 40, 50]
Step 3: num[3] = num[2] → [10, 20, 30, 30, 40, 50]
Now, num[position - 1] = value → num[2] = 25.
Final array: [10, 20, 25, 30, 40, 50].
*/