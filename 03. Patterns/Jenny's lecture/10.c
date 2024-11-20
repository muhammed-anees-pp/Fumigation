*/

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

#include <stdio.h>
int main(){
	int i,j,k,row=5;
	for(i=1;i<=row;i++){
		for(j=1;j<=row-i;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}	
	
	for(i=row-1;i>=1;i--){
		for(j=1;j<=row-i;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}


/*
Workout:

i space star	
1 4	1
2 3	3
3 2	5
4 1	7
5 0	9
6 1	7
7 2	5
8 3	3
9 4	1
*/	
