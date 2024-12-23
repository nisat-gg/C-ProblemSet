#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE], reversed[MAX_SIZE];
    int length, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str); // Read the input string

    length = strlen(str); // Get the length of the string

    // Reverse the string
    for (int i = 0; i < length; i++)
    {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Compare the original string and reversed string
    for (int i = 0; i < length; i++)
    {
        if (str[i] != reversed[i])
        {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}