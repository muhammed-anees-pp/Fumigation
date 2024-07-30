#include <stdio.h>
int main()
{
	int size,values[50],i,no=0;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the values of array: ");
	for(i=0;i<size;i++){
		scanf("%d",&values[i]);
		if(values[i]%2==0){
			no=no+1;}
	}

	printf("Number of even numbers in the given array is %d",no);
	return 0;
}