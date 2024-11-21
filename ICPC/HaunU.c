#include <stdio.h>
#include <stdlib.h>

#define MAX_N 500000


int towerf(int n, int rings[]) {
    int towers[MAX_N]; 
    int t_c = 0; 

    for (int i = 0; i < n; i++) {
        int ring = rings[i];

       
        int left = 0, right = t_c, pos = t_c;
        while (left < right) {
            int mid = (left + right) / 2;
            if (towers[mid] >= ring) {
                pos = mid;
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        if (pos == t_c) {
            t_c++;
        }

        towers[pos] = ring;
    }

    return t_c;
}

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        int n; 
        scanf("%d", &n);

        int rings[n]; 
        for (int i = 0; i < n; i++) {
            scanf("%d", &rings[i]);
        }

        int result = towerf(n, rings);
        printf("%d\n", result);
    }

    return 0;
}



