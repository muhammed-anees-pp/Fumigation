/*
*********
 *******
  *****
   ***
    *
*/

#include <stdio.h>
int main(){
	int i,j,k,row=5;
	for(i=5;i>=1;i--){
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

i star space	equation
5 9	0	
4 7	1	
3 5	2	
2 3	3
1 1	4
*/	