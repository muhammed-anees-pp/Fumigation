#include <stdio.h>
int main()
{
	int i,num,flag=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++){
		if(num%i==0){
		flag=1;
		break;}
	}
	if(flag==0){
	printf("Number is prime");}
	else{
	printf("Number is not a prime");}

	return 0;
}
