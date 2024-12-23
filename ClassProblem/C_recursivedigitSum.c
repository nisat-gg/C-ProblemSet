#include <stdio.h>
#include <string.h>

int super_digit(int n) {
    if (n < 10) {
        return n;
    }
    
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return super_digit(sum);
}

int main() {
    int n = 9875;
    int k = 4;
    
    char p[100] = "";
    
    for (int i = 0; i < k; i++) {
        char temp[10];
        sprintf(temp, "%d", n);
        strcat(p, temp);
    }
    
    int p_int = atoi(p);
    int result = super_digit(p_int);
    
    printf("The super digit of p is: %d\n", result);
    
    return 0;
}