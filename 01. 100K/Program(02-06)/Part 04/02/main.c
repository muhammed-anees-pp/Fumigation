#include <stdio.h>
int main()
{
	int num,i,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum=sum+i;}
	printf("Result: %d",sum);
	
	return 0;
}