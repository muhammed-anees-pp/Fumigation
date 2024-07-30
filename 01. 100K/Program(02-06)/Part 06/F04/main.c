#include <stdio.h>

int sum(); //Function declaring
int main()
{
	int k;
	k=sum(); //Function calling
	printf("Result is %d",k);
	return 0;
}


//Define Function
int sum()
{
	int num1,num2,result;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	result=num1+num2;
	
	return result;
}