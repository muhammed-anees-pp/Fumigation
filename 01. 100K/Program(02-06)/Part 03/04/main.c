#include <stdio.h>
int main()
{
	int num1,num2,choice;
	float result;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&num1,&num2);
	printf("Select the operation \n1 for addition \n2 for subtraction \n3 for multiplication \n4 for division \n");
	scanf("%d",&choice);
	
	if(choice==1){
	result=num1+num2;
	printf("Result: %f",result);}
	else if(choice==2){
	result=num1-num2;
	printf("Result: %f",result);}
	else if(choice==3){
	result=num1*num2;
	printf("Result: %f",result);}
	else if(choice==4){
	result=num1/num2;
	printf("Result: %f",result);}
	else{printf("Wrong selection");}
	
	return 0;
}
