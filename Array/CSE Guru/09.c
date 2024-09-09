//Printing even numbers and odd numbers separately

#include <stdio.h>
int main(){
	int values[100],evenValues[100],oddValues[100];
	int i,even=0,odd=0,limit;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the element of the array:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}

	for(i=0;i<limit;i++){
		if(values[i]%2==0){
			evenValues[even]=values[i];
			even++;
		}
		else{
			oddValues[odd]=values[i];
			odd++;
		}
	}

	printf("Even numbers:\n");
	for(i=0;i<even;i++){
		printf("%d ",evenValues[i]);
	}

	printf("\nOdd numbers:\n");
	for(i=0;i<odd;i++){
		printf("%d ",oddValues[i]);
	}

	return 0;
}

/*
Workout:

limit=6 Array: 30 25 45 60 92 83

iteration 1
i=0, 0<6 condition true
values[0]%2==0 | 30%2==0
evenValues[0]=values[0] | evenValues[0]=30; even++, even==1

iteration 2
i=1,1<6 condition true
value[1]%2==0 | 25%2!==0 condition false, so work the else part
oddValues[0]=25, odd++, odd==1

iteration3
i=2,2<6 condition true
value[2]%2==0 | 45%2!==0 condition false, so work the else part
oddValues[1]=45, odd++, odd==2;
*/