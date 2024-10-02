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
			if(j<=row+1-i){
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

i	j	space	j-def	j<= row+1-i
1	12345	0	j<=5
2	1234	1	j<=4
3	123	2	j<=3
4	12	3	j<=2
5	1	4	j<=1

*/