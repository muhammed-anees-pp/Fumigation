/*

*****
 ****
  ***
   **
    *

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=1;j<=row;j++){
			if(j>=i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

/*
Working:
i	j		space
1	1 2 3 4 5	0
2	  2 3 4 5	1
3	    3 4 5	2
4	      4 5	3
5		5	4



Iteration 1 (i=1)
j=1,2,3,4,5

Iteration 2 (i=2)
j=2,3,4,5
*/
