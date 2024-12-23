#include <stdio.h>

// Function to swap two arrays using pointers
void swapArrayPointers(int **arr1, int **arr2, int *size1, int *size2) 
{
    int *tempArr = *arr1;
    *arr1 = *arr2;
    *arr2 = tempArr;

    int tempSize = *size1;
    *size1 = *size2;
    *size2 = tempSize;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};      // First array
    int arr2[] = {6, 7, 8, 9};         // Second array

    int size1 = sizeof(arr1) / sizeof(arr1[0]);  // Size of the first array
    int size2 = sizeof(arr2) / sizeof(arr2[0]);  // Size of the second array

    int *ptr1 = arr1; // Pointer to the first array
    int *ptr2 = arr2; // Pointer to the second array

    // Print original arrays
    printf("Original Arrays:\n");
    printf("arr1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    // Swap the arrays
    swapArrayPointers(&ptr1, &ptr2, &size1, &size2);

    // Print swapped arrays
    printf("\nArrays after swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    return 0;
}

