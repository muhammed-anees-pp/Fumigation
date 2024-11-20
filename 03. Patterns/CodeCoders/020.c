/*

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/

#include <stdio.h>
int main(){
	int row=5,i,j;
	for(i=1;i<=row;i++){
		for(j=5;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	return 0;
}