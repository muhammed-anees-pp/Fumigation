#include <stdio.h>
int main()
{
	int i,num,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=2;i<=num;i++){
		if(i%2==0){
		sum=sum+i;
		    
		}
	}
	printf("Result: %d",sum);
	

	return 0;
}