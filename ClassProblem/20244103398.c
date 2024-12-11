#include <stdio.h>

int mystrlen(char* s1) 
{
    int l = 0;
    while (s1[l] != '\0') 
    {
        l++;
    }
    return l;
}

void mystrcat(char s1[], char s2[]) 
{
    int i = mystrlen(s1);
    int j = 0;
    while (s2[j] != '\0') 
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

int mystrcmp(char s1[], char s2[]) 
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') 
    {
        if (s1[i] != s2[i]) 
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

void mystrcpy(char s1[], char s2[]) 
{
    int i = 0;
    while (s2[i] != '\0') 
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

int main() 
{
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    // gets(str1);
    // gets(str2);

    str1[mystrlen(str1) - 1] = '\0';
    str2[mystrlen(str2) - 1] = '\0';

    printf("Length of first string: %d\n", mystrlen(str1));

    mystrcat(str1, str2);

    printf("After concatenation: %s\n", str1);

    int cmp = mystrcmp(str1, str2);

    if (cmp == 0) 
    {
        printf("Strings are equal.\n");
    } 
    else if (cmp < 0) 
    {
        printf("First string is smaller.\n");
    } 
    else 
        printf("Second string is smaller.\n");
    

    char str3[100];

    mystrcpy(str3, str2);
    
    printf("Copied string: %s\n", str3);

    return 0;
}
