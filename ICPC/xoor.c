#include <stdio.h>


long long func(int n)
{
  
    long long fullCycles = n / 4;
    long long remainder = n % 4;

 
    long long sum = fullCycles * 4;

 
    for (int i = 1; i <= remainder; i++)
    {
        if (i % 4 == 0)
            sum += i;
        else if (i % 4 == 1)
            sum += 1;
        else if (i % 4 == 2)
            sum += i + 1;
        else
            sum += 0;
    }

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
