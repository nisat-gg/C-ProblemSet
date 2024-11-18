// #include <stdio.h>
// #define MAX_SIZE 100

// void max_and_min(int arr[], int n, int *max, int *min);

// int main()
// {
//     int arr[MAX_SIZE];
//     int i, n, max, min;

    
//     printf("Enter size of the array: ");
//     scanf("%d", &n);
   
//     if (n <= 0) {
//         printf("Invalid array size.\n");
//         return 1;
//     }

//     printf("Enter %d elements in the array: ", n);
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     max = arr[0];
//     min = arr[0];

//     max_and_min(arr, n, &max, &min);

//     printf("Maximum= %d\nMinimum= %d", max, min);

//     return 0;
// }

// void max_and_min(int arr[], int n, int *max, int *min)
// {
    

//     for(int i=0; i < n; i++)
//     {

//        if (*max < arr[i])
//         {
//             *max = arr[i];
//         }
//        if (*min > arr[i])
//        {
//             *min = arr[i];
//        }
//     }
// }

#include <stdio.h>
#define MAX_SIZE 100

void inputArray(int arr[], int n);
int findMax(int arr[], int n);
int findMin(int arr[], int n);

int main()
{
    int arr[MAX_SIZE];
    int n, max, min;

    
    printf("Enter size of the array: ");
    scanf("%d", &n);
   
    printf("Enter %d elements in the array: ", n);
    inputArray(arr, n);

    max = findMax(arr, n);
    min = findMin(arr, n);

    printf("Maximum= %d\nMinimum= %d", max, min);

    return 0;
}

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int findMax(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int n)
{
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}