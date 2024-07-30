#include <stdio.h>
int main()
{
	int i,j,size,array[50],temp;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the values of array: ");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);}

	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(array[i]<array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}

	printf("Sorted array (descending order): ");
	for(i=0;i<size;i++){
		printf("%d\t",array[i]);
	}
	
	return 0;
}