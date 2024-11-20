/*    
	1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

*/

#include <stdio.h>
int main(){
	int row=5,i,j;
	for(i=1;i<=row;i++){
		int num=1;
		for(j=1;j<=row;j++){
			if(i+j>row){
				printf("%d ",num);
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