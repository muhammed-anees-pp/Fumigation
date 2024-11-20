/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number1,number2;
    printf("Enter two numbers: ");
    scanf("%d%d",&number1,&number2);
    
    if(number1>number2){
        printf("%d is the greatest number",number1);
    }
    
    else{
        printf("%d is the greatest number",number2);
    }

    return 0;
}
