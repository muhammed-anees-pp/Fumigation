#include <stdio.h>
int main()
{
	float mark;
	printf("Enter your marks out of 100: ");
	scanf("%f",&mark);
	if(mark>=50){
	printf("Passed");
	}
	else{
	printf("Failed");
	}

	return 0;
}