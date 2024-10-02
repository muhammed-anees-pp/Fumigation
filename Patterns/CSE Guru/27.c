*/

*
* *
*   *
*     *
* * * * *

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			if(i==row || j==1 || i==j){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}

/*
Working:

Iteration 1 (i=1)
j=1 (*)

Iteration 2 (i=2)
j=1 2 (* *)

Iteration 3 (i=3)
j=1 2 3 (*   *)
*/