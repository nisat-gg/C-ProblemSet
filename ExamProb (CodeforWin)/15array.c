#include <stdio.h>

int main()
{
    int arr1[5] = {1, 4, 6, 9, 15};
    int arr2[4] = {2, 5, 8, 10}; 
    int merge[9];
    int i = 0, j = 0, k = 0;
    
    while(i < 5 && j < 4)
    {
        if(arr1[i] < arr2[j])
            merge[k++] = arr1[i++];
        else
            merge[k++] = arr2[j++];
    }

    while(i < 5)
        merge[k++] = arr1[i++];
    while(j < 4)
        merge[k++] = arr2[j++];

    for(int i = 0; i < 9; i++)
        printf("%d ", merge[i]);

    return 0;
}

// #include <stdio.h>

// // Function to sort an array in ascending order
// void sortArray(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int size1, size2;

//     // Input size of the first array
//     printf("Enter the size of the first array: ");
//     scanf("%d", &size1);
//     int arr1[size1];

//     // Input elements of the first array
//     printf("Enter %d elements of the first array:\n", size1);
//     for (int i = 0; i < size1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     // Input size of the second array
//     printf("Enter the size of the second array: ");
//     scanf("%d", &size2);
//     int arr2[size2];

//     // Input elements of the second array
//     printf("Enter %d elements of the second array:\n", size2);
//     for (int i = 0; i < size2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     // Sort both arrays
//     sortArray(arr1, size1);
//     sortArray(arr2, size2);

//     // Merge arrays
//     int merge[size1 + size2];
//     int i = 0, j = 0, k = 0;

//     while (i < size1 && j < size2) {
//         if (arr1[i] < arr2[j])
//             merge[k++] = arr1[i++];
//         else
//             merge[k++] = arr2[j++];
//     }

//     while (i < size1)
//         merge[k++] = arr1[i++];
//     while (j < size2)
//         merge[k++] = arr2[j++];

//     // Print the merged array
//     printf("Merged array in ascending order: ");
//     for (int i = 0; i < size1 + size2; i++) {
//         printf("%d ", merge[i]);
//     }
//     printf("\n");

//     return 0;
// }
