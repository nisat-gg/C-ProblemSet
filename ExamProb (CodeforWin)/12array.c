#include <stdio.h>

void printUniqueElements(int arr[], int n) 
{
    int count;

    // Traverse the array and check for each element
    for(int i = 0; i < n; i++) 
    {
        count = 0;

        // Count occurrences of arr[i]
        for(int j = 0; j < n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                count++;
            }
        }

        // If the element appears only once, print it
        if(count == 1) 
        {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {4, 5, 7, 8, 4, 9, 5, 10, 11, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements in the array: ");
    printUniqueElements(arr, n);

    return 0;
}

