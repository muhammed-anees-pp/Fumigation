/*

*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}


	return 0;
}

/*
Working:

Iteration 1 (i=1)
j=1 (*)

Itertion 2 (i=2)
j=1 2 (* *)
*/



