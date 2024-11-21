#include <stdio.h>

long long get(int k)
{
    if (k % 4 == 0)
        return k;
    else if (k % 4 == 1)
        return 1;
    else if (k % 4 == 2)
        return k + 1;
    else
        return 0;
}

long long func(int n)
{
    long long sum = 0;

    for (int i = 1; i <= n; i++)
        sum += get(i);
    
    return sum;
}

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n;
        scanf("%d", &n);
        
        printf("%lld\n", func(n));
    }

    return 0;
}