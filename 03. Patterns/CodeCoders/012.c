/*
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5

*/

#include <stdio.h>
int main(){
	int row=5,i,j;
	for(i=1;i<=row;i++){
		for(j=1;j<=row;j++){
			if(i+j>row){
				printf("%d ",j);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}