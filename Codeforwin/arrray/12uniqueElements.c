#include <stdio.h>

int main() {
    int arr[] = {5, 10, 2, 5, 50, 5, 10, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements:\n");
    for (int i = 0; i < size; i++) {
        int isUnique = 1;

        // Check if arr[i] appears elsewhere in the array
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Not unique
                break;
            }
        }

        // Print if unique
        if (isUnique) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
