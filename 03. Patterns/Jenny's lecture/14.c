/*

A
B B
C C C
D D D D
E E E E E

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%c ",64+i);
		}
		printf("\n");
	}
	
	return 0;
}


/*
Workout:

i=1 j=1
*/