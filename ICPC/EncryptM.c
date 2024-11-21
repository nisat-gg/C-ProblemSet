#include <stdio.h>
#include <string.h>

void bobEncrypt(char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            // For uppercase characters
            if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
                text[i] = (((text[i] - 'A') + 1) % 26) + 'A'; // Apply 1 shift for vowels
            }
            text[i] = (((text[i] - 'A') + 2) % 26) + 'A'; // Apply 2 shift for consonants
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            // For lowercase characters
            if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
                text[i] = (((text[i] - 'a') + 1) % 26) + 'a'; // Apply 1 shift for vowels
            }
            text[i] = (((text[i] - 'a') + 2) % 26) + 'a'; // Apply 2 shift for consonants
        }
    }
}

int main() {
    char text[100];

    printf("Enter message: ");
    fgets(text, sizeof(text), stdin);

    bobEncrypt(text);

    printf("Encrypted text: %s\n", text);
    return 0;
}
