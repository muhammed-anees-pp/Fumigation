#include <stdio.h>
int main()
{
    int i,j,values[3][3];
    printf("Enter the array values: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&values[i][j]);
        }
    }

    printf("Multi diementional array values are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",values[i][j]);
        }
        printf("\n");
    }

    return 0;
}