#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int key);

int main(int argc, string argv[])
{
    // Check if the program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Error: Provide exactly one command-line argument.\n");
        return 1; // Exit with error code 1
    }

    // Check if every character in argv[1] is a digit
    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // for (int i = 0; argv[1][i] != '\0'; i++)
    // {
    //     if (!isdigit(argv[1][i]))
    //     {
    //         printf("Usage: ./caesar key\n");
    //         return 1; // Exit with error code 1
    //     }
    // }

    // Convert argv[1] from a 'string' to an 'int'
    int key = atoi(argv[1]);

    // Promt user for plaintext
    string p_text = get_string("plaintext:  ");

    // For each character in the plaintext:
    for (int i = 0; p_text[i] != '\0'; i++)
    {
        p_text[i] = rotate(p_text[i], key);
    }
    // for (int i = 0; p_text[i] != '\0'; i++)
    // {
    //     if (isalpha(p_text[i]))
    //     {
    //         char base;

    //         // Determine if the letter is uppercase or lowercase
    //         if (isupper(p_text[i]))
    //         {
    //             base = 'A'; // Base for the uppercase letter
    //         }
    //         else
    //         {
    //             base = 'a'; // Base for the lowercase letter
    //         }

    //         // Rotate the character and wrap around using modulo
    //         p_text[i] = (p_text[i] - base + key) % 26 + base;
    //     }
    // }

    // Print the resulting ciphertext
    printf("ciphertext: %s\n", p_text);

    return 0;
}

// Function to check if the string contains only digits
bool only_digits(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i]))
        {
            return false; // If a non-digit character is found
        }
    }
    return true; // All characters are digits
}

// Function to rotate a character by 'key' positions
char rotate(char c, int key)
{
    if (isalpha(c))
    {
        char base = isupper(c) ? 'A' : 'a';
        return (c - base + key) % 26 + base;
    }
    return c; // Return the charracter unchanged if it's not a letter
}
