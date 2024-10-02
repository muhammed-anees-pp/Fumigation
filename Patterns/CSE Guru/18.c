/*

A
B A
C B A
D C B A
E D C B A

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=i;j>=1;j--){
			printf("%c ",64+j);
		}
		printf("\n");
	}

	return 0;
}

/*
Working:

Iteration 1 (i=1)
j=1 (A)

Iteration 2 (i=2)
j=2,1 (A,B)
*/