//Reversing only the first half of the element

#include <stdio.h>
int main(){
	int i,limit,values[100],temp;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}

	for(i=0;i<limit/4;i++){
		temp=values[i];
		values[i]=values[(limit/2)-1-i];
		values[(limit/2)-1-i]=temp;
	}

	printf("Array elements: \n");
	for(i=0;i<limit;i++){
		printf("%d ",values[i]);
	}

	return 0;
}

/*
Workout:

30 20 40 60 90 80

40 20 30 60 90 80
*/

//Other way:

#include <stdio.h>
int main(){
	int i,j,limit,values[100],temp;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	
	for(i=0,j=(limit/2)-1;i<limit/4;i++,j--){
		temp=values[i];
		values[i]=values[j];
		values[j]=temp;
	}

	printf("Array elements: \n");
	for(i=0;i<limit;i++){
		printf("%d ",values[i]);
	}

	return 0;
}

