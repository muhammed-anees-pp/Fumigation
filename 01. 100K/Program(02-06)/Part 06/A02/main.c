#include <stdio.h>
int main()
{
	int size,i,j,array1[3][3],array2[3][3],sum[3][3];
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the 1st array:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array1[i][j]);
		}
	}
	
	printf("Enter the 2nd array:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array2[i][j]);
		}
	}
	
	printf("Sum:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		sum[i][j]=array1[i][j]+array2[i][j];
		printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}