/*

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}

/*
Working:

Iteration 1 (i=1)
j=1

Iteration 2 (i=2)
j=2,1

Iteration 3 (i=3)
j=3,2,1

Iteration 4 (i=4)
j=4,3,2,1

Iteration 5 (i=5)
j=5,4,3,2,1

*/
