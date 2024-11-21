#include <stdio.h>
#include <string.h>


int Vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


char shiftCharacter(char c, int shift) {
    return (c - 'a' + shift) % 26 + 'a';
}

int main() {
    char input[101];
    scanf("%s", input); 

    int length = strlen(input);
    for (int i = 0; i < length; i++) {
        if (Vowel(input[i])) {
          
            input[i] = shiftCharacter(input[i], 1);
        } else {
           
            input[i] = shiftCharacter(input[i], 2);
        }
    }

    printf("%s\n", input);
    return 0;
}
