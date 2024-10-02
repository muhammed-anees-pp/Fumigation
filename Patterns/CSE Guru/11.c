/*

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=row;i>=1;i--){
		for(j=row;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}


	return 0;
}

/*
Workout:
Iteration 1 (i=5)
j=5

Iteration 2 (i=4)
j=5,4

Iteration 3 (i=3)
j=5,4,3

Iteration 4 (i=2)
j=5,4,3,2

Iteration 5 (i=1)
j=5,4,3,2,1
*/
