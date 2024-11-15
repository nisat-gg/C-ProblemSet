#include <stdio.h>

int main() {
    int hours[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};  // Array to store hours from 1 to 12

 
    for (int count = 0; count < 200; count++) {
      
        for (int i = 0; i < 12; i++) {
            printf("%d ", hours[i]);
        }
        printf("\n");
    }

    printf("Job completed! You've been paid.\n");  // Message when done
    return 0;
}
