/*
a
a b
a b c
a b c d
a b c d e
*/

#include <stdio.h>
int main(){
	int row=5,i,j;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%c ",96+j);
		}
		printf("\n");
	}

	return 0;
}