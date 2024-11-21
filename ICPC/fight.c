#include <stdio.h>
#include <math.h>

double calculate_average_dps(long long b, long long c) {
    return b + (double)b / c;
}

int main() {

    long long h1, p1, s1; 
    long long h2, p2, s2; 

    scanf("%lld %lld %lld", &h1, &p1, &s1);
    scanf("%lld %lld %lld", &h2, &p2, &s2);

    double mike_dps = calculate_average_dps(p1, s1);
    double jake_dps = calculate_average_dps(p2, s2);


    double mikeWin = (double)h2 / mike_dps;
    double jakeWin = (double)h1 / jake_dps;

 
    if (mikeWin < jakeWin) {
        printf("MIKE TYSON\n");
    } else if (jakeWin < mikeWin) {
        printf("JAKE PAUL\n");
    } else {
        printf("DRAW\n");
    }

    return 0;
}
