/*

    *
   ***
  *****
 *******
*********

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=row;i++){
		for(j=1;j<=2*row-1;j++){
			if(j>=row+1-i && j<=row-1+i){
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

i	j		j(def)		
1	5		j>=5 && j<=5	j>=row+1-i && j<=row-1+i
2	456		j>=4 && j<=6
3	34567		j>=3 && j<=7
4	2345678		j>=2 && j<=8
5	123456789	j>=1 && j<=9	

Iteration 1 (i=1)
j=    5

Iteration 2 (i=2)
j=   456

*/
