/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,choice,result;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("Press \n1 for addition \n2 for subtraction \n3 for multiplication \n4 for division \nPlease press any of them");
    scanf("%d",&choice);
    
    if (choice==1){
        result=num1+num2;
    }
    else if (choice==2){
        result=num1-num2;
    }
    else if (choice==3){
        result=num1*num2;
    }
    else if (choice==4){
        result=num1/num2;
    }
    else{
        printf("You have entered a wrong number");
    }
    
    printf("The answer is %d",result);

    return 0;
}
