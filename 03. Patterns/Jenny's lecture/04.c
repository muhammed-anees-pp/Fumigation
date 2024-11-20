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
		for(j=1;j<=row;j++){
			if(i+j>row){
				printf("* ");
			}
			else{
			printf("  ");
			}
		}
		printf("\n");
	}	

	return 0;
}

/*
Workout:

(i+j)>row *

(i+j)<=row space
*/
