/*

X X X X X X 6
X 1
X X X X  4
X 1
X X 2
X 1

*/

#include <stdio.h>
int main(){
	int i,j,row=3;
	for(i=row;i>=1;i--){
		for(j=1;j<=i*2;j++){
			printf("X ");
		}
		printf("\nX\n");
	}

	return 0;
}


/*
Working:

Iteration 1 (i=3)
j=1 2 3 4 5 6

Iteration 2 (i=2)
j=1 2 3 4

Iteration 3 (i=1)
j=1 2
*/