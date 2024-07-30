#include <stdio.h>
int main()
{
	int i,limit;
	printf("Enter a limit: ");
	scanf("%d",&limit);
	for(i=2;i<=limit;i=i+2){
		printf("%d\n",i);}
	return 0;
}