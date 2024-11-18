#include <stdio.h>

int main() {
    int arr[] = {5, 10, 2, 5, 50, 5, 10, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Create visited array to mark counted elements
    int visited[size];
    for(int i = 0; i < size; i++) {
        visited[i] = 0;
    }
    
    // Count frequency of each element
    for(int i = 0; i < size; i++) {
        // Skip if already counted
        if(visited[i] == 1) {
            continue;
        }
        
        int count = 1;
        // Count frequency
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        
        printf("Frequency of %d = %d\n", arr[i], count);
    }
    
    return 0;
}
