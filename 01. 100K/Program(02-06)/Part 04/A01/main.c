#include <stdio.h>
int main()
{	
	int num,i,mult;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		mult=i*num;
		printf("%d x %d = %d\n",i,num,mult);
		}
	return 0;
}