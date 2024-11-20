/*

        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

*/

#include <stdio.h>
int main(){
	int i,j,k,row=5;
	for(i=1;i<=row;i++){
		for(j=row-i;j>=1;j--){
			printf("  ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",k);
		}
		printf("\n");
	}

	return 0;
}

/*
Working:

Iteration 1 (i=1)
j - (row-i)
j=4,3,2,1
k=1
(        1)

Iteration 2 (i=2)
j=3,2,1
k=1,2
(      1 2)
*/