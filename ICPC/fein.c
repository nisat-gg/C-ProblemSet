#include <stdio.h>

int main() {
    int t; 
    scanf("%d", &t);
    
    while (t--) {
        int n, d; 
        scanf("%d %d", &n, &d);
        
        int b[n]; 
        int remainingBuildings[n]; 
        int count = 0; 
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
           
            if (b[i] > d) {
                remainingBuildings[count++] = i + 1; 
            }
        }
        
        if (count == 0) {
           
            printf("FE!N\n");
        } else {
          
            printf("%d\n", count);
            for (int i = 0; i < count; i++) {
                printf("%d ", remainingBuildings[i]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
