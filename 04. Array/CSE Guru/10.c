//2nd largest element in an array

#include <stdio.h>
int main(){
	int limit,i,values[100];
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}

	int leastValue1=0,leastValue2=0;
	
	for(i=0;i<limit;i++){
		if(values[i]>leastValue1){
			leastValue2=leastValue1;
			leastValue1=values[i];
		}
		else if(values[i]>leastValue2 && values[i]<leastValue1){
			leastValue2=values[i];
		}
	}
	
	printf("First largest number is %d",leastValue1);
	printf("\nSecond largest number is %d",leastValue2);

	return 0;
}

/*
Workout:
30 25 45 60 92 83

Iterations Breakdown--

Iteration 1 (i = 0):
leastValue1=0 and leastValue2=0
values[0] = 30 | 30 > leastValue1 | So, leastValue2 becomes leastValue1, and leastValue1 becomes 30.
Now: leastValue1 = 30, leastValue2 = 0

Iteration 2 (i = 1):
values[1] = 25 | 25> leastValue1 -false | going to the next else if condition. | 25>leastValue2 && 25<leastValue1 -true 
Now: leastValue1 = 30, leastValue2 = 25

Iteration 3(i=2):
values[2] = 45 | 45>leastValue1 -true | So leastValue1 30 going to leastValue2 and leastValue1 become 45.
Now: leastValue1 = 45, leastValue2 = 30

Iteration 4(i=3)
values[3] = 60 | 60>leastValue1 -true | So leastValue1=leastValue2=45 and leastValue1 =60
Now: leastValue1 = 60, leastValue2 = 45

Iteration 5(i=4)
values[4] = 92 | 92>leastValue1 -true | So 
Now: leastValue1 = 92, leastValue2=60

Iteration 6(i=5)
values[5] = 83 | 83>leastValue1 -false | Check the next condition
		 83>leastValue2 && 83<leastValue1 -true

Now: leastValue1 = 92, leastValue2 = 83


Note:
instead of using zero in least values, we can also use the term INT_MIN. When using the term have to declare #include <limits.h>

*/