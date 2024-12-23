#include <stdio.h>
#include <string.h>


int superDigit(char n[], int k) 
{
    long long sum = 0;

    int i = 0; 
    
    while (n[i] != '\0')
    {
        sum += (n[i] - '0'); 
        i++;
    }

    sum *= k;

    while (sum >= 10) 
    {
        long long temp = sum;
        sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }

    return (int)sum;
}

int main() 
{
    char n[100001]; 
    int k;

    scanf("%s %d", n, &k);

    printf("%d\n", superDigit(n, k));

    return 0;
}
