//Insert New value in a sorted array

#include <stdio.h>
int main(){
	int limit,value[100],i,j,newValue,temp;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	printf("Enter the new element: ");
	scanf("%d",&newValue);
	
	for(i=0;i<limit;i++){
		if(value[i]>newValue){
			break;
		}
	}

	for(j=limit;j>i;j--){
		value[j]=value[j-1];
	}
	value[i]=newValue;
	printf("New Array: ");
	for(i=0;i<=limit;i++){
		printf("%d ",value[i]);
	}
	

	return 0;
}

/*
First Loop (Finding Insertion Point):

The array is [10, 20, 30, 40, 50] and the new value to insert is 35.
Iteration 1 (i = 0): value[0] = 10, and 10 < 35. Continue.
Iteration 2 (i = 1): value[1] = 20, and 20 < 35. Continue.
Iteration 3 (i = 2): value[2] = 30, and 30 < 35. Continue.
Iteration 4 (i = 3): value[3] = 40, and 40 > 35. Break the loop.
Insertion Point: i = 3.
Second Loop (Shifting Elements):

Now that we know the insertion point i = 3, we need to shift elements to the right to make space for 35.

Start from the end of the array (j = limit which is 5) and move elements until j > i.

Iteration 1 (j = 5):

Move value[4] = 50 to value[5].
Array becomes [10, 20, 30, 40, 50, 50].
Iteration 2 (j = 4):

Move value[3] = 40 to value[4].
Array becomes [10, 20, 30, 40, 40, 50].
Inserting New Value:

After shifting, insert 35 at position i = 3.
Final array becomes [10, 20, 30, 35, 40, 50].
*/
