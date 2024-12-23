#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char c) {
    return c == 'a' || c == 'e';
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int n;
        char word[200001];
        scanf("%d", &n);   // Length of the word
        scanf("%s", word); // The word itself

        for (int i = 0; i < n; ) {
            // Print a syllable based on the rules
            if (!isVowel(word[i]) && i + 1 < n && isVowel(word[i + 1])) {
                // CV syllable
                printf("%c%c", word[i], word[i + 1]);
                i += 2;
            } else if (!isVowel(word[i]) && i + 2 < n && isVowel(word[i + 1]) && !isVowel(word[i + 2])) {
                // CVC syllable
                printf("%c%c%c", word[i], word[i + 1], word[i + 2]);
                i += 3;
            }

            // Add a dot if there are more characters
            if (i < n) printf(".");
        }
        printf("\n"); // Move to the next line for the next test case
    }

    return 0;
}
