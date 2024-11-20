/*

        *
      * *
    * * *
  * * * *
* * * * *

*/

#include <stdio.h>
int main(){
	int row=5,i,j;
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

	
