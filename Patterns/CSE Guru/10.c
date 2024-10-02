/*

A
A B
A B C 
A B C D
A B C D E

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%c ",64+j);
		}
		printf("\n");
	}


	return 0;
}