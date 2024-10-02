/*

* * 2
* 1
* * * * * 5
* *
* * 2 X 2
* * * * * * * * 8
* * *
* * *
* * * 3 X 3
* * * * * * * * * * * 11

*/

#include <stdio.h>
int main(){
	int i,j,k,l,row=4;
	for(i=1;i<=row;i++){
		for(j=1;j<=(i*3)-1;j++){
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

Iteration (i=1)
j=1 2
k=1 l=1 

Iteration (i=2)
j=1 2 3 4 5
k=1 2 l=1 2

Iteration (i=3)
j=1 2 3 4 5 6 7 8
k=1 2 3 l=1 2 3

Iteration (i=4)
j=1-11


2 (1*3)-1
5 (2*3)-1
8 (3*3)-1
11 (4*3)-1
*/