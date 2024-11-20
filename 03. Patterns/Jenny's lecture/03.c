/*
1 
1 2 
1 2 3 
1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}


	return 0;
}

/*
workout:
i=1 - 1
i=2 - 1 2
i=3 - 1 2 3
i=4 - 1 2 3 4
i=5 - 1 2 3 4 5
*/

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

#include <stdio.h>
int main(){
	int i,j;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}

/*
Workout:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/




A2

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

Ans:

#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	return 0;
}


Workout:

i=1 j-- - 54321
i=2 j-- - 5432
i=3 j-- - 543
i=4 j-- - 54
i=5 j-- - 5
