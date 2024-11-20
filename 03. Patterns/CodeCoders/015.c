/*
        A
      A B
    A B C
  A B C D
A B C D E

*/

#include <stdio.h>
int main(){
	int row=5,i,j;
	for(i=1;i<=row;i++){
		int num=1;
		for(j=1;j<=row;j++){
			if(i+j>row){
				printf("%c ",64+num);
				num++;
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}