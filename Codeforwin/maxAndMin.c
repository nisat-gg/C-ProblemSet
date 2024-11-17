#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, max, min;

    
    printf("Enter size of the array: ");
    scanf("%d", &n);
   
    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=0; i < n; i++)
    {

       if (max < arr[i])
        {
            max = arr[i];
        }
       if (min > arr[i])
       {
            min = arr[i];
       }
    }


    printf("Maximum= %d\nMinimum= %d", max, min);

    return 0;
}