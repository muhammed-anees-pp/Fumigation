//Reversing only the second half of the element

#include <stdio.h>
int main(){
	int i,j,limit,values[100],temp;
	printf("Enter the limit of array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	
	for(i=limit/2,j=limit-1;i<j;i++,j--){
		temp=values[i];
		values[i]=values[j];
		values[j]=temp;
	}

	printf("Final array:\n");
	for(i=0;i<limit;i++){
		printf("%d ",values[i]);
	}

	
	return 0;
}

/*
Workout:

Breaking Down the Code for limit = 10
Initial Array:
Assuming the array values is initially filled with the following elements:

1, 2, 3, 4, 5, 6, 7, 8, 9, 10
Reversing the Second Half:

Iteration 1:

i = 5 (halfway point)
j = 9 (last index)
Swap values[5] (6) with values[9] (10):
values becomes: 1, 2, 3, 4, 5, 10, 7, 8, 9, 6
Iteration 2:

i = 6
j = 8
Swap values[6] (7) with values[8] (9):
values becomes: 1, 2, 3, 4, 5, 10, 9, 8, 7, 6
Iteration 3:

i = 7
j = 7
Since i is no longer less than j, the loop terminates.
Final Array:
The resulting array after reversing the second half is:

1, 2, 3, 4, 5, 10, 9, 8, 7, 6
Explanation:
The code effectively reverses the second half of the array by repeatedly swapping elements from the beginning and end of that half until the indices meet. In this case, with limit = 10, the second half starts at index 5 (inclusive) and ends at index 9 (inclusive).

*/