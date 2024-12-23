#include <stdio.h>

int recursive_digit_sum(int n, int k) 
{
    if (n < 10) 
    {
        return n;
    }

    int digitSum = 0;

    while (n > 0) 
    {
        digitSum += n % 10;
        n /= 10;
    }

    return recursive_digit_sum(digitSum * k, 1);
}

int main() 
{
    int n;
    int k;

    scanf("%d %d", &n, &k);

    int digit = recursive_digit_sum(n, k);
    printf("%d\n", digit);

    return 0;
}