/*

* * * * *
* * * *
* * *
* * 
*

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=row;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}

/*
Working:

Iteration 1 (i=5)
j=1 2 3 4 5 (* * * * *)

Iteration 2 (i=4)
j=1 2 3 4 (* * * *)
*/