#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compare(char message[], int size);
int isUppercase(char message[], int size);

int main()
{
    char message[100];
    fgets(message, sizeof(message), stdin);

    int length = strlen(message);

    if (message[length - 1] == '\n')
    {
        message[length - 1] = '\0';
        length --;
    }


    if (isUppercase(message, length))
    {
        int alterCount = compare(message, length);
        printf("%d\n", alterCount);
        return 0;
    }
    else
        {
            printf("WRONG INPUT");
            return 1;
        }
}

int compare(char message[], int size)
{
    char mainSeries[] = "SOS";
    int alterCount = 0;


    for (int m = 0; m < size; m += 3)
    {
        for (int s = 0; s < 3; s++)
        {
            if (message[m + s] != mainSeries[s])
                alterCount++;
        }
    }
    return alterCount;
}


int isUppercase(char message[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!isupper(message[i]))
            return 0;
    }
    return 1;
}