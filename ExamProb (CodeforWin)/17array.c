#include <stdio.h>

int main() {

    int n, i;
    int odd[100], even[100];
    int oddCount = 0, evenCount = 0;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

      for (i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCount++] = arr[i];

        }
        else 
        {
            odd[oddCount++] = arr[i];

        }
    }

    for (i = 0; i < evenCount; i++) 
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    for (i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
