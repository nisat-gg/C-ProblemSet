#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fpr = fopen("input.txt", "r");
    FILE* fpw = fopen("output.txt", "w");

    if(fpr != NULL && fpw != NULL)
    {
        char s[100];
        fgets(s, sizeof(s), fpr);
        strcat(s, ", wildfire hai");

        fputs(s, fpw);
        //puts(s);
        fclose(fpr);
        fclose(fpw);
    }
    return 0;
}