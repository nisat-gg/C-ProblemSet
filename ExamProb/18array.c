#include <stdio.h>

int main() {

    int n, i, search;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Element to search is: ");
    scanf("%d", &search);

    int found = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("%d Element found at index: %d\n", search, i);  // i is accessible here
    else
        printf("not found\n");

    return 0;
}
