/*

*  1
* 1 X 1
* * * 3   
* * 2X2
* *
* * * * *  5
* * * 3 X 3
* * *
* * *

*/

#include <stdio.h>
int main(){
	int i,j,k,l,row=3;
	for(i=1;i<=row;i++){
		for(j=1;j<=(i*2)-1;j++){
			printf("* ");
		}
		printf("\n");
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

1 (1*2)-1
1
123 (2*2)-1
12
12
12345(3*2)-1
123
123
123

Iteration 1 (i=1)
j=1
k=1 l=1

Iteration 2 (i=2)
j=123
k=12
l=12
*/