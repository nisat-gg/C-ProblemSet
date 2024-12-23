#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fpr = fopen("input.txt", "r");
    FILE *fpw = fopen("output.txt");

    if(fpr != NULL && fpw != NULL)
    {
        char s[100];
        fgets(s, sizeof(s), fpr);

        strcat(s, ", We are boomers");

        fputs(s, fpw);
        fclose(fpr);
        fclose(fpw);
    }
        return 0;
    
}