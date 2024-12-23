#include <stdio.h>

// Function to copy elements from one array to another
void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];  // Copying elements using array indexing
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};  // Source array
    int arr2[5];                    // Destination array
    int size = sizeof(arr1) / sizeof(arr1[0]);  // Size of the array

    // Call function to copy elements
    copyArray(arr1, arr2, size);

    // Print the destination array
    printf("Elements in arr2 (copied from arr1): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
