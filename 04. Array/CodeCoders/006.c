//Write a program to print all unique elements in an array

#include <stdio.h>
int main(){
	int limit,value[100],i,j;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	
	printf("Unique elements in the array: ");

	for(i=0;i<limit;i++){
		int count=0;
		for(j=0;j<limit;j++){
			if(i!=j && value[i]==value[j]){
				count++;
				break;
			}
		}
		if(count==0){
			printf("%d ",value[i]);
		}
	}
	
	return 0;
}


