#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<5;i++){
        printf("Hi");
        printf("\n");
        
        if(i==3){
            break;
        }
        printf("Hello");
        printf("\n");
    }
    printf("Finished");
    
    return 0;
}