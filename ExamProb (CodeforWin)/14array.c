#include <stdio.h>

void deleteDuplicates(int arr[], int *size) {
    int i, j, k;
    
    // Traverse the array
    for(i = 0; i < *size; i++) {
        // Compare the current element with all the subsequent elements
        for(j = i + 1; j < *size; j++) {
            if(arr[i] == arr[j]) {
                // Shift all elements left to remove the duplicate
                for(k = j; k < *size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*size)--;  // Reduce the size
                j--; // Adjust the index after shifting
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteDuplicates(arr, &size);

    printf("Array After Removing Duplicates: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
