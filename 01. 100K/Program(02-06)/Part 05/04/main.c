#include <stdio.h>
int main()
{
	int i,limit,num[100],sum=0;
	printf("Enter the size of array: ");
	scanf("%d",&limit);
	printf("Enter the numbers:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	
	printf("Sum:%d",sum);
	return 0;
}
