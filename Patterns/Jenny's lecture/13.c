/*
A B C D E
A B C D
A B C 
A B
A

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=row;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%c ",64+j);
		}
		printf("\n");
	}

	return 0;
}

/*
Workout:

i=5 j=1 2 3 4 5
i=4 j=1 2 3 4
i=3 j=1 2 3
i=2 j=1 2
i=1 j=1
*/

/*
AssignmentQ

E E E E E
D D D D
C C C
B B
A

*/

#include <stdio.h>
int main(){
	int i,j,row=5;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%c ",64+i);
		}
		printf("\n");
	}
	
	return 0;
}


/*
Workout:
i=5 j=5 times
i=4 j=4 times
i=3 j=3 times
i=2 j=2 times
i=1 j=1 time
*/
