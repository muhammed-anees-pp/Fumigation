/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,value,sum=0;
    printf("Enter a number: ");
    scanf("%d",&value);
    
    for(i=1;i<=value;i++){
        sum=sum+i;
    }
    
    printf("Sum: %d",sum);

    return 0;
}
