#include <stdio.h>

int main() {
    int arr[10];    // Array to hold elements
    int n;          // Number of elements
    int *ptr = arr; // Pointer pointing to the array

    // Input the number of elements
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    // Input array elements using the pointer
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);  // Store input in the array using pointer
    }

    // Print array elements using the pointer
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  // Access and print element using pointer
    }
    printf("\n");

    return 0;
}
