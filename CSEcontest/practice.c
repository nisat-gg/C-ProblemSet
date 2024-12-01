#include <stdio.h>

int main() 
{
    int P1, P2, P3, P4;

    scanf("%d %d %d %d", &P1, &P2, &P3, &P4);

    int count = 0;

   
    if (P1 >= 10) 
        count++;
    if (P2 >= 10) 
        count++;
    if (P3 >= 10) 
        count++;
    if (P4 >= 10) 
        count++;

   
    printf("%d\n", count);

    return 0;
}
