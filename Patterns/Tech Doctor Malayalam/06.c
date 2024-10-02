/*

* * * * * * * * * *
* * * * * * * *
* * * * * *
* * * *
* *

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=row;i>=1;i--){
		for(j=1;j<=i*2;j++){
			printf("* ");
		}
		printf("\n");
	}


	return 0;
}