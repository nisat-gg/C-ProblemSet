#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100];
    printf("Before: ");
    fgets(s, sizeof(s), stdin);
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     printf("%c", toupper(s[i]));
        // }
        // else 
        // {
        //     printf("%c", s[i]);
        // }
        printf("%c\n", toupper(s[i]));
    }
    printf("\n");

}




/* if lowercase then

if (s[i] >= 'a' && s[i] <= 'z')
{
    printf("%c", s[i] - 32);

}

*/