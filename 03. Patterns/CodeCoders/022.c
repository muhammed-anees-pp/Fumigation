/*

A B C D E
A B C D
A B C 
A B
A

*/

#include <stdio.h>
int main(){
	int row=5,i,j;
	for(i=row;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%c ",64+j);
		}
		printf("\n");
	}


	return 0;
}