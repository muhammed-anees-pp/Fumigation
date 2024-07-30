#include <stdio.h>
int main()
{
	int limit,i,j,temp,num[100];
	printf("Enter the limit of array: ");
	scanf("%d",&limit);
	printf("Enter the array elements: ");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}

	printf("Array elements are:\t");
	for(i=0;i<limit;i++){
		printf("%d\t",num[i]);
	}//Only given for undrestanding the working

	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	
	printf("\nSorted array:\t");
	for(i=0;i<limit;i++){
		printf("%d\t",num[i]);
	}

	return 0;
}
