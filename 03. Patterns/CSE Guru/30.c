/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <stdio.h>
int main(){
	int i,j,row=5,number=1;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}

	return 0;
}

/*
Working:

Iteration 1 (i=1)
j=1 (1)

Iteration 2 (i=2)
j=1,2 (2 3)

Iteration 3 (i=3)
j=1,2,3 (4 5 6)
*/