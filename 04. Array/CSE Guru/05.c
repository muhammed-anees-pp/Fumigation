//Reversing the elements in an array

#include <stdio.h>
int main(){
	int i,limit,values[100],temp;
	printf("Enter the limit of array: ");
	scanf("%d",&limit);
	printf("Enter the values of array\n");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}

	for(i=0;i<limit/2;i++){
		temp=values[i];
		values[i]=values[limit-i-1];
		values[limit-i-1]=temp;
	}
	
	printf("Reversed array:\n");
	
	/*for(i=0;i<limit;i++){
		printf("%d ",values[i]);
	}*/

	for(i=0;i<limit;i++){
	    printf("\n values[%d]=%d",i,values[i]);
	}

	return 0;
}

/*
Note: 
The loop condition to i < limit / 2, the array only swaps elements up to the middle, avoiding double reversal.
*/






Working:
if array is 
10 20 30 40 50
here, 
a[0]=10 
a[1]=20 
a[2]=30 
a[3]=40 
a[4]=50 

it should be reverse like,
a[0]=50
a[1]=40
a[2]=30
a[3]=20
a[4]=10