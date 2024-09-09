//Sum of the elements in an array (Prime numbers)

#include <stdio.h>
int main(){
	int limit,num[100],sum=0,i;
	printf("Enter the size of the array: ");
	scanf("%d",&limit);
	printf("Enter the array elements: ");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}

	for(i=0;i<limit;i++){
	    if(num[i]<=1){
	        continue;
	    }
	    
		if(num[i]==2 || num[i]==3 || num[i]==5 || num[i]==7){
			sum=sum+num[i];
		}
		if(num[i]%2!=0 && num[i]%3!=0 && num[i]%5!=0 && num[i]%7!=0){
			
			sum=sum+num[i];
		}
	}
	
	printf("Sum of prime numbers %d",sum);



	return 0;
}