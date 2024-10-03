#include <stdio.h>

int main()
{
    FILE *ftpr;

    ftpr = fopen("programs.txt", "w");
    if (ftpr == NULL)
    {
        printf("error");
        return 1;
    }
    else
    {
        printf("file created successfully");
    }

    {
        fprintf(ftpr, "We are learning about text files \n");
        fclose(ftpr);
    }

    // reading text file

    char contents[1000];
    ftpr = fopen("programs.txt", "r");
    if (ftpr != NULL)
    {
        fgets(contents, 1000, ftpr);
        printf("\n%s\n", contents);
    }

    return 0;
}