/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,arr[100],limit,sum=0;
    printf("Enter array limit: ");
    scanf("%d",&limit);
    
    printf("Enter the values to add: ");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<limit;i++){
        sum=sum+arr[i];
    }
    
    printf("Result:%d ",sum);

    return 0;
}
