#include <stdio.h>
#define MAX_SIZE 100

int main() {

    int n, i;
    int arr[MAX_SIZE]; 

    printf("Enter size of the array: ");
    scanf("%d", &n);
  
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }


    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
