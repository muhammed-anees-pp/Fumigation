#include <stdio.h>
int main()
{
	char string[100];
	int length=0,flag=0,i;
	printf("Enter a string: ");
	scanf("%s",string);
	
	for(i=0;string[i]!='\0';i++){ //string[i] not equals to \0, that is the condition
		length++;}
	
	for(i=0;i<length;i++){
		if(string[length-i-1]!=string[i]){	
				flag=1;}
	}

	if(flag==0){
		printf("The string is a palindrome");}
	else{
		printf("The string is not a palindrome");} 
	
	
	return 0;
}