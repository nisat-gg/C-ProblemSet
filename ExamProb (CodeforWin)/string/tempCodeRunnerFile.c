#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    
    // Compare each character of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // Strings are not equal
        }
        i++;
    }

    // If both strings end at the same point, they are equal
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;  // Strings are equal
    }

    return 0;  // Strings are not equal if one is longer than the other
}

int main() {
    char str1[100], str2[100];
    
    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    // Compare the strings
    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
