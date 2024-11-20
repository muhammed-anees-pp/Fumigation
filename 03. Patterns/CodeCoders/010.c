/*
a
b b
c c c
d d d d
e e e e e
*/

#include <stdio.h>
int main(){
	int row=5,i,j;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%c ",96+i);
		}
		printf("\n");
	}

	return 0;
}