#include <stdio.h>
int main()
{
	int size,array1[100],array2[100],i,temp;
	printf("Enter the size of arrays: ");
	scanf("%d",&size);
	printf("Enter the elements of Array 1: ");
	for(i=0;i<size;i++){
		scanf("%d",&array1[i]);}

	printf("Enter the elements of Array 2: ");
	for(i=0;i<size;i++){
		scanf("%d",&array2[i]);}

	for(i=0;i<size;i++){
		temp=array1[i];
		array1[i]=array2[i];
		array2[i]=temp;}
	
	printf("Array1: ");
	for(i=0;i<size;i++){
		printf("%d\t",array1[i]);}
	
	printf("\nArray2: ");
	for(i=0;i<size;i++){
		printf("%d\t",array2[i]);}

	return 0;
}