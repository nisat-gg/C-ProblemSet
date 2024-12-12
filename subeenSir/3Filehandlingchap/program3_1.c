#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");

    fprintf(fp, "This is a file created by by program! ");
    fprintf(fp, "I am so happy.");

    return 0;
}   