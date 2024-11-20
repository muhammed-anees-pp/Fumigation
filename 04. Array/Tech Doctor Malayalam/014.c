//Sort elements of array in descending order

#include <stdio.h>
int main(){
	int limit,value[100],i,j,temp;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the elements of array:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(value[i]<value[j]){
				temp=value[i];
				value[i]=value[j];
				value[j]=temp;
			}
		}
	}
	
	printf("Array in descending order: ");
	for(i=0;i<limit;i++){
		printf("%d ",value[i]);
	}


	return 0;
}

/*
Working:

limit = 5
Array elements: [50, 20, 40, 10, 30]
Sorting Process:

1st iteration (i = 0):

Compare value[0] = 50 with value[1] = 20 → no swap
Compare value[0] = 50 with value[2] = 40 → no swap
Compare value[0] = 50 with value[3] = 10 → no swap
Compare value[0] = 50 with value[4] = 30 → no swap
(After the first iteration, the largest element 50 stays in the first position.)

2nd iteration (i = 1):

Compare value[1] = 20 with value[2] = 40 → swap: [50, 40, 20, 10, 30]
Compare value[1] = 40 with value[3] = 10 → no swap
Compare value[1] = 40 with value[4] = 30 → no swap
(After the second iteration, the second largest element 40 is in the second position.)

3rd iteration (i = 2):

Compare value[2] = 20 with value[3] = 10 → no swap
Compare value[2] = 20 with value[4] = 30 → swap: [50, 40, 30, 10, 20]
(After the third iteration, the third largest element 30 is in the third position.)

4th iteration (i = 3):

Compare value[3] = 10 with value[4] = 20 → swap: [50, 40, 30, 20, 10]
(After the fourth iteration, the array is fully sorted.)

Final Output: [50, 40, 30, 20, 10]
*/