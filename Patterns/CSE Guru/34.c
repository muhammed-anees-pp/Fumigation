/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	for(i=row;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}

/*
Working:
1st Loop
Iteration 1 (i=1)
j=1

Iteration 2 (i=2)
j=1,2


2nd Loop
Iteration 1 (i=5)
j=1,2,3,4,5
*/