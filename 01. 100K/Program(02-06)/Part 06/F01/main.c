#include <stdio.h>
void sum(); //Function declaring
int main()
{
	sum(); //Function calling
	return 0;
}

//Defining function
void sum()
{
	int num1,num2,sum;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Result:%d",sum);
}