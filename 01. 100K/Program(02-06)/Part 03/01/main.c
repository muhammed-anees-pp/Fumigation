#include <stdio.h>
int main()
{
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);
	if(num>0){
	printf("The given number is positive");
	}
	else{
	printf("The given number is negative");
	}
	return 0;
}