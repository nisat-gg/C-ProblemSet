#include <stdio.h>

int main() {
    int t, n, k;

    scanf("%d", &t);
    
    for (int caseN = 0; caseN < t; caseN++) {   
        scanf("%d %d", &n, &k);
        
        int start_year = n - k + 1;
        if (start_year < 1) {
            start_year = 1;
        }
        
        long long total_leaves = 0;

      long long sum_n = (long long)n * (n + 1) * (2 * n + 1) / 6;
        long long sum_start_year_minus_1 = (long long)(start_year - 1) * start_year * (2 * (start_year - 1) + 1) / 6;

        total_leaves = sum_n - sum_start_year_minus_1;

        if (total_leaves % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
