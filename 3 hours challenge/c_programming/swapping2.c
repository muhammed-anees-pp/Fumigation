#include <stdio.h>

int main()
{
    int a=10,b=20,temp;
    
    a=b;
    b=a;
    printf("a:%d b:%d",b,a);

    return 0;
}