/*

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=row;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}

/*
working:

Iteration 1 (i=1)
j=5,4,3,2,1

Iteration 2 (i=2)
j=5,4,3,2

*/