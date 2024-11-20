/*

5
4 5
3 4 5
2 3 4 5
1 2 3 4 5

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=row;i>=1;i--){
		for(j=i;j<=row;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}

/*
Working:

Iteration 1 (i=5)
j=5

Iteration 2 (i=4)
j=4 5

Iteration 3 (i=3)
j=3 4 5
*/