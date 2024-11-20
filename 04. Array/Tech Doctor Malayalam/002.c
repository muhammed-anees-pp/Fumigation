//Find the average of n numbers

#include <stdio.h>
int main(){
	int limit,num[100],i,sum=0;
	float average;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	average=(float)sum/limit;
	printf("Average of %d numbers of the array is %f",limit,average);


	return 0;
}