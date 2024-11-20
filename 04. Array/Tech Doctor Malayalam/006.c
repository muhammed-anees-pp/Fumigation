//Find average of odd numbers in an array

#include <stdio.h>
int main(){
	int limit,num[100],count=0,sumOdd=0,i;
	float average;
	printf("Enter the array limit: ");
	scanf("%d",&limit);
	printf("Enter the elements of the array: ");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
		if(num[i]%2==1){
			sumOdd+=num[i];
			count++;
		}
	}
	average=(float)sumOdd/count;
	printf("Average of the odd numbers in the array is %f",average);

	return 0;
}