#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size, even, odd;

    
    scanf("%d", &size);
   
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    even = 0;
    odd  = 0;

    for(int i=0; i < size; i++)
    {
    
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even= %d\nOdd= %d", even, odd);

    return 0;
}