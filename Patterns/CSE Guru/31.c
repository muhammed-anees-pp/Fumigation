/*

1
0 1
0 1 0
1 0 1 0
1 0 1 0 1

*/

#include <stdio.h>
int main(){
	int i,j,row=5,number=1;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d ",number%2);
			number++;
		}
		printf("\n");
	}


	return 0;
}


/*
Working:

number%2

Iteration 1 (i=1)
j=1 | 1%2=1 | (1)

Iteration 2 (i=2)
j=1,2 | 2%2=0,3%2=1 | (10)

Iteration 3 (i=3)
j=1,2,3 | 4%2=0,5%2=1,6%2=0 | (101)
*/