#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find minimum swaps with bitwise AND cost
int findMinCostSwaps(int arr[], int n, int swaps[][2]) {
    int swap_count = 0;
    int visited[n];  // Track visited elements to avoid revisiting elements
    int total_cost = 0;

    // Initialize the visited array
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Iterate through each element
    for (int i = 0; i < n; i++) {
        // If the element is already in the correct position or visited, skip it
        if (visited[i] || arr[i] == i + 1) {
            continue;
        }

        // Start a new cycle
        int j = i;

        // While we are in the cycle
        while (!visited[j]) {
            visited[j] = 1;
            int target_pos = arr[j] - 1;  // Correct position for arr[j]

            // If the element is not in its correct position
            if (j != target_pos) {
                // Calculate the cost of this swap based on bitwise AND
                int swap_cost = (j & target_pos) & 1;  // 1 if odd, 0 if even
                total_cost += swap_cost;

                // Record the swap (store 0-based index)
                swaps[swap_count][0] = j;
                swaps[swap_count][1] = target_pos;
                swap_count++;

                // Perform the swap
                swap(&arr[j], &arr[target_pos]);
            }

            // Move to the next element in the cycle
            j = target_pos;
        }
    }

    printf("%d\n", total_cost); // Print total cost as specified in output format
    return swap_count;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int swaps[3 * N][2]; // Allocate space for possible swaps

        int swap_count = findMinCostSwaps(arr, N, swaps);

        // Output the result
        printf("0\n");  // Print 0 as per output format requirement
        printf("%d\n", swap_count);
        
        // Output all swaps
        for (int i = 0; i < swap_count; i++) {
            printf("%d %d\n", swaps[i][0] + 1, swaps[i][1] + 1);
        }
    }

    return 0;
}