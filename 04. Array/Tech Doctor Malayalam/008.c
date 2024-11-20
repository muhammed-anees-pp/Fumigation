//Find largest element in an array without sorting

#include <stdio.h>
#include <limits.h>
int main(){
	int limit,num[100],i,largest=INT_MIN;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the elements of the array:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}	
	
	for(i=0;i<limit;i++){
		if(num[i]>largest){
			largest=num[i];
		}
	}
	
	printf("Largest element of the array is %d",largest);


	return 0;
}