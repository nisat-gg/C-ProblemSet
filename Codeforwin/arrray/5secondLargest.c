#include <stdio.h>
#define MAX_SIZE 100

void inputArray(int arr[], int n);
int First_Maxima(int arr[], int n);
int Second_Maxima(int arr[], int n, int first_maxima);
int findMin(int arr[], int n);

int main()
{
    int arr[MAX_SIZE];
    int n, max1, max2, min;

    
    scanf("%d", &n);
   
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int first_maxima = First_Maxima(arr, n);
    int second_maxima = Second_Maxima(arr, n, first_maxima);
    min = findMin(arr, n);

    printf("First Maxima= %d\nSecond Maxima= %d\nMinimum= %d", first_maxima, second_maxima, min);

    return 0;
}

int First_Maxima(int arr[], int n)
{
    int first_maxima = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > first_maxima)
            first_maxima = arr[i];
    }

    return first_maxima;
}

int Second_Maxima(int arr[], int n, int first_maxima)
{
    int second_maxima = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != first_maxima && arr[i] > second_maxima)
            second_maxima = arr[i];
    }

    return second_maxima;
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