/*

*  1
**** 4
*2
*
******** 8
* 3
*
*
************ 12

*/

#include <stdio.h>
int main(){
	int i,j,k,row=3;
	for(i=1;i<=row;i++){
		for(k=1;k<=i;k++){
			printf("*\n");
		}
		for(j=1;j<=i*4;j++){
			printf("*");
		}
		printf("\n");
	}


	return 0;
}


/*
Working:

Iteration 1 (i=
k=1
j=1234

Iteration 2 (i=
k=1 2
j=12345678

Iteration 3 (i=
k=1 2 3
j=123456789101112
*/
