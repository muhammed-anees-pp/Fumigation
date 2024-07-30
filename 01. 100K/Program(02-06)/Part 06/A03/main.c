#include <stdio.h>

// Function prototypes
void getArray(int arr[], int size);
void displayArray(int arr[], int size);

int main() {
    int array[100];
    int size = 5; // Assuming size is 5 as used in your loop

    getArray(array, size);  // Pass the array to getArray
    displayArray(array, size);  // Pass the array to displayArray

    return 0;
}

// Function to get values for the array
void getArray(int arr[], int size) {
    printf("Enter the array values: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to display the array values
void displayArray(int arr[], int size) {
    printf("Array:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}