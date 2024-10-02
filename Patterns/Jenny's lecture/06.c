/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/

#include <stdio.h>
int main(){
	int i,j,row=5,number=1;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}	

	return 0;
}

/*
Workout:
i=1 - n=1
i=2 - n=2 3 
i=3 - n=4 5 6
i=4 - n=7 8 9 10
i=5 - n=11 12 13 14 15
*/