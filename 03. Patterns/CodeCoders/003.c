/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/

#include <stdio.h>
int main(){
	int row=5,i,j;
	for(i=1;i<=row;i++){
		for(j=1;j<=row;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}