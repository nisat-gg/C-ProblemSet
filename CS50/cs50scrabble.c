#include <cs50.h>
#include <ctype.h>   // For toupper()
#include <stdio.h>
#include <string.h>  // For strlen()

// Function to get the value of a letter
int get_letter_value(char letter, int alphabet_values[])
{
    return alphabet_values[letter - 'A'];  // Simply return the value of the letter
}

int main()
{
    // Predefined values for each letter from A to Z
    int alphabet_values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                               1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    // Get player names
    string Player1 = get_string("Player 1: ");
    string Player2 = get_string("Player 2: ");

    // Calculate the sum of values for Player 1
    int sum = 0, sum1 = 0;

    // Loop to calculate Player 1's score
    for (int j = 0, p1 = strlen(Player1); j < p1; j++)
    {
        char letter = toupper(Player1[j]);  // Convert to uppercase
        if (letter >= 'A' && letter <= 'Z') // Only process valid letters
        {
            sum += get_letter_value(letter, alphabet_values);
        }
    }

    // Loop to calculate Player 2's score
    for (int j = 0, p2 = strlen(Player2); j < p2; j++)
    {
        char letter = toupper(Player2[j]);  // Convert to uppercase
        if (letter >= 'A' && letter <= 'Z') // Only process valid letters
        {
            sum1 += get_letter_value(letter, alphabet_values);
        }
    }

    // Determine the winner
    if (sum > sum1)
    {
        printf("Player 1 wins!\n");
    }
    else if (sum1 > sum)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}
