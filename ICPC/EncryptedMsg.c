#include <stdio.h>
#include <string.h>
#include <ctype.h>

void bobEncrypt(char *text)
{
    int v = 1; 
    int k = 2; 

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z') 
        {
            if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
            {
                text[i] = (((text[i] - 'a') + v) % 26) + 'a'; 
            }
            else
            {
                text[i] = (((text[i] - 'a') + k) % 26) + 'a'; 
            }
        }
    }
}

int main()
{
    char text[100];

    printf("Enter message: ");
    scanf("%s", text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (!islower(text[i]))
        {
            printf("Invalid input! Please enter only lowercase English letters.\n");
            return 1;
        }
    }

    bobEncrypt(text);

    printf("Encrypted text: %s\n", text);

    return 0;
}
