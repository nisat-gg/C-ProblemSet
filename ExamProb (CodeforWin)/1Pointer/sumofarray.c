#include <stdio.h>

int main() {
    int arr[10];    // Array to hold elements
    int n;          // Number of elements
    int *ptr = arr; // Pointer pointing to the array
    int sum = 0;    // Variable to store the sum

    // Input the number of elements
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);  // Store input using pointer
    }

    // Calculate sum using the pointer
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);  // Add the value pointed to by the pointer
    }

    // Print the sum
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}

