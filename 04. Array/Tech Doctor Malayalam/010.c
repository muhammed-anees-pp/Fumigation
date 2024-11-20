//Find smallest element in an array without sorting

#include <stdio.h>
#include <limits.h>
int main(){
	int limit,num[100],small=INT_MAX,i;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
		if(num[i]<small){
			small=num[i];
		}
	}

	printf("Smallest element of the array is %d",small);

	return 0;
}