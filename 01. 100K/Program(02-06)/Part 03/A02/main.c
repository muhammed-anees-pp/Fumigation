#include <stdio.h>
int main()
{
	float TMP;
	printf("Enter your mark percentage: ");
	scanf("%f",&TMP);
	if(TMP>=90){
	printf("Grade A");}
	else if(TMP<=89 && TMP>=80){
	printf("Grade B");}
	else if(TMP<=79 && TMP>=70){
	printf("Grade C");}
	else if(TMP<=69 && TMP>=60){
	printf("Grade D");}
	else if(TMP<=59 && TMP>=50){
	printf("Grade E");}
	else{
	printf("Failed");}
	
	return 0;
}