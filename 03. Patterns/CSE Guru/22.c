/*

E D C B A
E D C B
E D C 
E D
E

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=row;j>=i;j--){
			printf("%c ",64+j);
		}
		printf("\n");
	}

	return 0;
}

/*
Working:

Iteration 1 (i=1)
j=5 4 3 2 1 (E D C B A)

Iteration 2 (i=2)
j=5 4 3 2 (E D C B)

Iteration 3 (i=3)
j=5 4 3 (E D C)
*/