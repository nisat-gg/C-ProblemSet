#include <stdio.h>

int main() 
{
    int X;

    printf("Enter temperature: ");
    scanf("%d", &X); 

    if (X > 35) 
    {
        printf("Yes\n"); 
    } 
    else 
    {
        printf("No\n"); 
    }

    return 0;
}
