#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 5, 2, 4, 2, 4, 3, 5, 4, 5};
    int count = 0;  // Initialize the count of duplicates
    int size = sizeof(arr) / sizeof(arr[0]);  // Get the size of the array

    for (int i = 0; i < size; i++) {
        // Skip already checked or counted elements
        if (arr[i] == -1) {
            continue;
        }

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;  // Increment count for each duplicate found
                arr[j] = -1;  // Mark this element as visited
                break;  // Break out of the inner loop once a duplicate is found
            }
        }
    }

    printf("Number of duplicate elements: %d\n", count);

    return 0;
}
