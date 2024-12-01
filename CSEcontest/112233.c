#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    int count1 = 0, count2 = 0, count3 = 0;

   
    while (N > 0) 
    {
        int digit = N % 10; 
        
        if (digit == 1) count1++;

        if (digit == 2) count2++;

        if (digit == 3) count3++;

        N /= 10; 
        
    }


    if (count1 == 1 && count2 == 2 && count3 == 3) 
    {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
