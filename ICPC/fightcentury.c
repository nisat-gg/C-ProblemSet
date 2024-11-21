#include <stdio.h>

int main() {
   
    long long h1, b1, c1;
    scanf("%lld %lld %lld", &h1, &b1, &c1);
    
    // Input for Jake Paul
    long long h2, b2, c2;
    scanf("%lld %lld %lld", &h2, &b2, &c2);
    
    long long t1 = 0, t2 = 0; 
    long long time = 0;       

    while (1) {
       
        long long damage1 = b1;
        long long damage2 = b2;

        if (t1 == 0) damage1 *= 2;
        if (t2 == 0) damage2 *= 2;

       
        h2 -= damage1;
        h1 -= damage2;

   
        if (h1 <= 0 && h2 <= 0) {
            printf("DRAW\n");
            break;
        } else if (h2 <= 0) {
            printf("MIKE TYSON\n");
            break;
        } else if (h1 <= 0) {
            printf("JAKE PAUL\n");
            break;
        }

       
        time++;
        t1 = (t1 > 0) ? t1 - 1 : c1 - 1; 
        t2 = (t2 > 0) ? t2 - 1 : c2 - 1;
    }

    return 0;
}
