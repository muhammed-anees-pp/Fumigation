/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    printf("Select anything from the menu \n1 for Pathiri \n2 for Dosha \n3 for Iddli \n4 for Porotta \nSelect your choice: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("You have selected Pathiri");
        break;
        
        case 2:
        printf("You have selected Dosha");
        break;
        
        case 3:
        printf("You have selected Iddli");
        break;
        
        case 4:
        printf("You have selected Porotta");
        break;
        
        default:
        printf("Wrong seletion");
    }
    
    

    return 0;
}
