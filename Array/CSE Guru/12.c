//Repeated element and count

#include <stdio.h>
int main(){
	int limit,i,j,num[100],repeat;
	printf("Enter the limit of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}

	for(i=0;i<limit-1;i++){
		repeat=1;
		for(j=i+1;j<limit;j++){
			if(num[i]==0){
				continue;
			}
			if(num[i]==num[j]){
				repeat++;
				num[j]=0;
			}
			
		}
		if(repeat>1){
			printf("\n%d is repeated %d times",num[i],repeat);
		}
	}


	return 0;
}

/*
Working:

30 30 20 30 50 20

Iteration 1 (i=0)
j=1 2 3 4 5
num[0]=30 and num[1]=30 => num[0]==num[1] true- repeat=2 | num[1]=0
	      num[2]=20 => num[0]==num[2] false
	      num[3]=30 => num[0]==num[3] true- repeat=3 | num[3]=0
	      num[4]=50 => num[0]==num[4] false
	      num[5]=20 => num[0]==num[5] false
Print- 30 repeated 3 times

Iteration 2 (i=1)
num[1]=0 and num[2]=20 => num[1]==0 | continue

Iteration 3 (i=2)
num[2]=20 and num[3]=0 => num[2]==num[3] false
	      num[4]=50 => num[2]==num[4] false
	      num[5]=20 => num[0]==num[3] true- repeat=2 | num[5]=0
Print- 20 repeated 2 times

Iteration 4 (i=3)
num[3]=0 and num[4]=50 => num[3]==0 | continue

Iteration 5 (i=4)
num[4]=50 and num[5]=0 => num[4]==num[5] false
*/