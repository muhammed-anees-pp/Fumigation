//Find average of even numbers in an array

#include <stdio.h>
int main(){
	int limit,num[100],i,sumEven=0,count=0;
	float average;
	printf("Enter the size of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements: ");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
		if(num[i]%2==0){
			sumEven=sumEven+num[i];
			count++;
		}
	}
	average=(float)sumEven/count;
	printf("Average of the even numbers is %f",average);


	return 0;
}