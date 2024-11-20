/*

* * 2
* 1
* * * * 4
* 2
*
* * * * * * 6  
* 3
*
*

*/

#include <stdio.h>
int main(){
	int i,j,k,row=3;
	for(i=1;i<=row;i++){
		for(j=1;j<=i*2;j++){
			printf("* ");
		}
		printf("\n");
		for(k=1;k<=i;k++){
			printf("*\n");
		}
	}

	return 0;
}


/*
Working:

Iteration 1 (i=1)
j=1 2
k=1

Iteration 2 (i=2)
j=1 2 3 4
k=1 2

Iteration 3 (i=3)
j=1 2 3 4 5 6
k=1 2 3
*/

