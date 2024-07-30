#include <stdio.h>
int main()
{
	int pa;
	float r,n,si;
	printf("Enter the principle amount: ");
	scanf("%d",&pa);
	printf("Enter the interest rate: ");
	scanf("%f",&r);
	printf("Enter the no of years: ");
	scanf("%f",&n);
	si=((pa*r*n)/100);
	printf("Simple interest for the principle amount of %d is %f",pa,si);

	return 0;
}