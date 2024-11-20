/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    if(num1>num2){
        if(num1>num3)
        printf("%d is the greatest number",num1);
    }
    
    if(num2>num3){
        if(num2>num1)
        printf("%d is the greatest number",num2);
    }
    
    if(num3>num1){
        if(num3>num2)
        printf("%d is the greatest number",num3);
    }
    

    return 0;
}


