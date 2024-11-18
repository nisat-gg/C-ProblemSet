#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size, neg;

    
    scanf("%d", &size);
   
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    neg = 0;


    for(int i=0; i < size; i++)
    {
    
        if(arr[i] < 0)
        {
            neg++;
        }
    
    }
    printf("Negative Elements= %d\n", neg);

    return 0;
}