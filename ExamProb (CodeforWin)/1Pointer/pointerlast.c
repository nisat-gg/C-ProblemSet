#include <stdio.h>

void toUppercase(char *str) {
    while (*str != '\0') { // Traverse the string until null terminator
        if (*str >= 'a' && *str <= 'z') { // Check if the character is lowercase
            *str = *str - ('a' - 'A');   
        }
        str++; // Move to the next character
    }
}

int main() {
    char str[100]; // Array to store the string

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Safely read the string

    // Convert to uppercase using the function
    toUppercase(str);

    // Print the resulting string
    printf("String in uppercase: %s\n", str);

    return 0;
}
