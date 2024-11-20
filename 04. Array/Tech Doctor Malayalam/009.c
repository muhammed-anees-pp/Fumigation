//Separate odd and even integers in separate arrays

#include <stdio.h>
int main(){
	int limit,num[100],evenArray[100],oddArray[100],evenCount=0,oddCount=0,i;
	printf("Enter the array limit: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<limit;i++){
		if(num[i]%2==0){
			evenArray[evenCount]=num[i];
			evenCount++;
		}
		else{
			oddArray[oddCount]=num[i];
			oddCount++;
		}
	}
	
	printf("Original array: ");
	for(i=0;i<limit;i++){
		printf("%d ",num[i]);
	}
	
	printf("\nEven elements: ");
	for(i=0;i<evenCount;i++){
		printf("%d ",evenArray[i]);
	}

	printf("\nOdd elements: ");
	for(i=0;i<oddCount;i++){
		printf("%d ",oddArray[i]);
	}

	return 0;
}