#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    for (int i = 1; i <= T; i++) {
        int PA, PB, PC;  
        scanf("%d %d %d", &PA, &PB, &PC);

        int valid = 0;  

       
        if ((PA == 6 && PB == 3 && PC == 0) ||  
            (PA == 6 && PB == 4 && PC == 1) ||  
            (PA == 6 && PB == 1 && PC == 1) ||  
            (PA == 3 && PB == 3 && PC == 3)) 
        {  
            valid = 1;  
        }

       
        if (valid) {
            printf("Case %d: perfectus\n", i);
        } else {
            printf("Case %d: invalidum\n", i);
        }
    }

    return 0;
}
