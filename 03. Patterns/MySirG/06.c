/*

    *
   * *
  * * *
 * * * *
* * * * *

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
			int k=1;
		for(j=1;j<=2*row-1;j++){
			if(j>=row+1-i && j<=row-1+i && k){
				printf("*");
				k=0;
			}
			else{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
	return 0;
}

/*
Working:

i	j	
1	5	j>=5	j<=5
2	46	j>=4	j<=6
3	357
4	2468
5	13579
*/
