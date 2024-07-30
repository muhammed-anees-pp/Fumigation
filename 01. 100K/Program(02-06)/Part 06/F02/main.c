#include <stdio.h>

void sum(int,int); //Function declaring with data type
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	sum(a,b); //Function called and passed the argument
	return 0;
}


//Function defining

void sum(int num1,int num2)//Declaring the values from the program-argument
{
	int result;
	result=num1+num2;
	printf("Result:%d",result);
}