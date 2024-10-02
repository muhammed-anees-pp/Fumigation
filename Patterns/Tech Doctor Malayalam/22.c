/*

***** 5
* 3
*
*
********** 10
*
*
*
*
*
* 6
*************** 15

*/

#include <stdio.h>
int main(){
	int i,j,k,l,row=3;
	for(i=1;i<=row;i++){
		for(j=1;j<=i*5;j++){
			printf("*");
		}
		if(i==row){
		break; }
		printf("\n");
		for(k=1;k<=i*3;k++){
			printf("*\n");
		}
	}


	return 0;
}


/*
Working:

Iteration 1 (i=1)
j=12345
k=123

Iteration 2 (i=2)
j=1-10
k=123456

Iteration 3 (i=3)
j=1-15
k=0
*/

