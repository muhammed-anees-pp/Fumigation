/*

* * * * * 5
*
* * * 3
* *
* *
* * * * * 5
* * *
* * *
* * *
* * * 3

*/

#include <stdio.h>
int main(){
	int i,j,k,l,row=4;
	for(i=1;i<=row;i++){
		for(j=1;j<=(i%2==0?3:5);j++){
			printf("* ");
		}
		printf("\n");

		if(i==row){
			break;
		}
		for(k=1;k<=i;k++){
			for(l=1;l<=i;l++){
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}


/*
Working:

Iteration 1 (i=1)
j=1 2 3 4 5
k=1 l=1

Iteration 2 (i=2)
j=1 2 3
k=1 2 l=1 2

Iteration 3 (i=3)
j=1 2 3 4 5
k=1 2 3 l=1 2 3

Iteration 4 (i=4)
j=1 2 3
k=break;
*/

