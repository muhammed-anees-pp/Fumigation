#include <stdio.h>
int main()
{
	int limit,i,num[100],search,flag=0;
	printf("Enter the limit of array: ");
	scanf("%d",&limit);
	printf("Enter the numbers:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&num[i]);
	}

	printf("Enter the search key: ");
	scanf("%d",&search);

	for(i=0;i<limit;i++){
		if(search==num[i]){
			flag=1;
			break;
		}
	}
	
	if(flag==1){
	printf("%d found at the %d position",search,i+1);	
	}
	else{
	printf("Not found %d in the array",search);}
	return 0;
}