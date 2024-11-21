#include <stdio.h>

int main()
{
    char text[100];
    int i;

    printf("Enter message: ");
    scanf("%[^\n]s", text);  

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z') 
        {
            int shift = (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || 
                         text[i] == 'o' || text[i] == 'u') ? 1 : 2; 
            text[i] = ((text[i] - 'a' + shift) % 26) + 'a'; 
        }
    }

    printf("Encrypted text: %s\n", text);
    return 0;
}