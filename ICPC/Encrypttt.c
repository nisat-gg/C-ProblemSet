#include <stdio.h>
#include <string.h>
#include <ctype.h>

char encrypt_char(char c) {
    int shift = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 2;
    return (c - 'a' + shift) % 26 + 'a';
}

void encrypt_message(char *message, char *encrypted) {
    int i, len = strlen(message);
    for (i = 0; i < len; i++) {
        if (isalpha(message[i])) {
            encrypted[i] = encrypt_char(tolower(message[i]));
        } else {
            encrypted[i] = message[i];
        }
    }
    encrypted[i] = '\0';
}

int main() {
    char message[] = "";
    char encrypted[strlen(message) + 1];
    encrypt_message(message, encrypted);
    printf("%s\n", encrypted); // Output: bdefrb
    return 0;
}