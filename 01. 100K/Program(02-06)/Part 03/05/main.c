#include <stdio.h>
int main()
{
	int choice;
	printf("Select your menu \n1 for Porotta \n2 for Chappathi \n3 for Vellappam \n4 for Pathiri \nOption: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
	printf("You have selected Porotta");
	break;
	case 2:
	printf("You have selected Chappathi");
	break;
	case 3:
	printf("You have selected Vellappam");
	break;
	case 4:
	printf("You have selected Pathiri");
	break;
	default:
	printf("Wrong selection");
	}
	return 0;
}
