#include <stdio.h>

int sum(int,int); //Function declaring with data type of argument
int main()
{	
	int a,b,res;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	res=sum(a,b); //Here res just a name, we can use any name
	printf("Result:%d",res);
	return 0;
}


int sum(int num1,int num2)//with function name int used here because of returning int data type
{
	int result;
	result=num1+num2;
	return result; //Return value giving here
} 