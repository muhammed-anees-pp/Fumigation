#include <stdio.h>

void getArray();
void displayArray();
int main()
{
    getArray();
    displayArray();
    return 0;
}


//Get array function
void getArray()
{
    int i,size,array1[20];
    printf("Enter the limit of the array: ");
    scanf("%d",&size);

    printf("Enter the array elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&array1[i]);
    }
}

//Display array function
 void displayArray(){
    int j,limit,array2[20];

    printf("Array:\n");
    for(j=0;j<limit;j++){
        printf("%d ",array2[j]);
    }
}