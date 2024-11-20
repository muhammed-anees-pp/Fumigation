/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float number1,number2,number3,average;
    printf("Enter 3 numbers: ");
    scanf("%f%f%f",&number1,&number2,&number3);
    average=(number1+number2+number3)/3;
    printf("Result is %f",average);

    return 0;
}
