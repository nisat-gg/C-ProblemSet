#include <stdio.h>
 
int main() {
    int t, n, k;
    
    scanf("%d", &t);
    
    for (int caseN = 1; caseN <= t; caseN++) {   
        scanf("%d %d", &n, &k);
        
        
        int start_year = n - k + 1;
        if (start_year < 1) {
            start_year = 1; 
        }
        
       
        int total_leaves = (n - start_year + 1) * (start_year + n) / 2;
 
        
        if (total_leaves % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
 
    return 0;
}