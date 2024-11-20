//Write a program to count the total number of duplicate elements in an array?

#include <stdio.h>
int main(){
	int limit,value[100],count=0,i,j;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the elements of the array: ");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(value[i]==value[j]){
				count++;
				break;
			}
		}
	}
	
	printf("Total number of duplicates in the array %d",count);
	
	return 0;
}

/*
limit = 6
value = [1 2 3 1 2]

Iteration 1(i=0)
j=1 | value[0] == value [1] -false
j=2 | value[0] == value [2] -false
j=3 | value[0] == value [3] -true | count++ and break

Iteration 2(i=1)
j=2 | value[1] == value [2] -false
j=3 | value[1] == value [3] -false
j=4 | value[1] == value [4] -true | count++ and break

Now count==2
So total no of duplicates in the array is 2
*/