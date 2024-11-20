//Sort elements of array in ascending order

#include <stdio.h>
int main(){
	int limit,value[100],i,j,temp;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(value[i]>value[j]){
				temp=value[i];
				value[i]=value[j];
				value[j]=temp;
			}	
		}
		
	}
	printf("Array in ascending order: ");
	for(i=0;i<limit;i++){
		printf("%d ",value[i]);
	}

	return 0;
}

/*
Input:
[50, 20, 40, 10, 30]

Sorting Process:

1st iteration (i = 0):

Compare value[0] = 50 with value[1] = 20, swap: [20, 50, 40, 10, 30]
Compare value[0] = 20 with value[2] = 40, no swap.
Compare value[0] = 20 with value[3] = 10, swap: [10, 50, 40, 20, 30]
Compare value[0] = 10 with value[4] = 30, no swap.
After the first iteration, the smallest element 10 is in the first position.

2nd iteration (i = 1):

Compare value[1] = 50 with value[2] = 40, swap: [10, 40, 50, 20, 30]
Compare value[1] = 40 with value[3] = 20, swap: [10, 20, 50, 40, 30]
Compare value[1] = 20 with value[4] = 30, no swap.
After the second iteration, the second smallest element 20 is in the second position.

3rd iteration (i = 2):

Compare value[2] = 50 with value[3] = 40, swap: [10, 20, 40, 50, 30]
Compare value[2] = 40 with value[4] = 30, swap: [10, 20, 30, 50, 40]
After the third iteration, the third smallest element 30 is in the third position.

4th iteration (i = 3):

Compare value[3] = 50 with value[4] = 40, swap: [10, 20, 30, 40, 50]
After the fourth iteration, the fourth smallest element 40 is in the fourth position.

After all iterations, the array is fully sorted: Final Array: [10, 20, 30, 40, 50]
*/