#include <stdio.h>
int main()
{
	int i,limit,num[100];
	printf("Enter the limit of array: ");
	scanf("%d",&limit);
	printf("Enter numbers:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}
	
	printf("Numbers are:\t");
	for(i=0;i<limit;i++){
		printf("%d\t",num[i]);
	}

	return 0;
}