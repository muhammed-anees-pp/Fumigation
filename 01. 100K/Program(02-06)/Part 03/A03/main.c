#include <stdio.h>
int main()
{
	int input;
	printf("Select your day \n1 for Sunday \n2 for Monday \n3 for Tuesday \n4 for Wednesday \n5 for Thursday \n6 for Friday \n7 for Saturday \n");
	scanf("%d",&input);
	switch(input){
	case 1:
	printf("Sunday");
	break;
	case 2:
	printf("Monday");
	break;
	case 3:
	printf("Tuesday");
	break;
	case 4:
	printf("Wednesday");
	break;
	case 5:
	printf("Thursday");
	break;
	case 6:
	printf("Friday");
	break;
	case 7:
	printf("Saturday");
	break;
	default:
	printf("Wrong Entry");	

	}
	return 0;
}