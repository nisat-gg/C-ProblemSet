#include <stdio.h>

void swap(int *x, int* y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}
void increment(int *a, int *b)
{

    (*a)++;
    (*b)++;
}

int main() {

    int a = 5, b = 6;

    increment(&a, &b);

    printf("%d %d\n", a, b);

    swap(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}