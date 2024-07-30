#include <stdio.h>
int main()
{
	int i,num[5];
	printf("Enter 5 numbers: ");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}

	printf("Numbers are:\t");
	for(i=0;i<5;i++){
		printf("%d\t",num[i]);
	}
	
	return 0;
}