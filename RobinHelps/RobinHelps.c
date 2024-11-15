#include <stdio.h>
 
int main()
{
    int t, n, k;
 
    scanf("%d", &t);
 
    for (int caseN = 1; caseN <= t; caseN++)
    {   
        scanf("%d %d", &n, &k);
        int a[n];
        int robintakes = 0;
        int robingives = 0;
 
         for (int i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
 
        if (n >= 1 && n <= 50 && k >= 1 && k <= 100)
        {
           for (int i = 0; i < n; i++) 
           {
            if (a[i] >= k)
            {
                robintakes += a[i];
            }
            else if (a[i] == 0 && robintakes > 0)
                {
                    robintakes--;
                    robingives++;
                }
           }
 
           printf("%d\n", robingives);
        }
    }
 
    return 0;
}