
#include <stdio.h>
#define MAX_SIZE 1000 

int main()
{
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, N;

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("\nNegativeElements in array are: ");
    for(i=0; i<N; i++)
    {   
        if (arr[i] < 0)
            printf("%d, ", arr[i]);
    }

    return 0;
}