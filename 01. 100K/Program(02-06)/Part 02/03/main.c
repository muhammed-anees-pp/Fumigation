#include <stdio.h>
int main()
{
	int num1,num2,num3;
	float average;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	average=((num1+num2+num3)/3);
	printf("Average is %f",average);
	
	return 0;
}