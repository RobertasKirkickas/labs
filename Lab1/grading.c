#include <stdio.h>

int main()
{

    int gradeProg;
    int gradeRDB;
    int gradeWeb;
    int gradeSoftw;
    int gradeComputing;

    printf("Enter your score  for Advanced programming\n");
    scanf("%d", &gradeProg);

    printf("Enter your score  for Relational databases\n");
    scanf("%d", &gradeRDB);

    printf("Enter your score  for Web design\n");
    scanf("%d", &gradeWeb);

    printf("Enter your score  for Software engineering\n");
    scanf("%d", &gradeSoftw);

    printf("Enter your score  for Computing research skills\n");
    scanf("%d", &gradeComputing);

    printf("Advanced programming:%d\n", gradeProg);
    printf("Relational databases :%d\n", gradeRDB);
    printf("Web design :%d\n", gradeWeb);
    printf("Software engineering:%d\n", gradeSoftw);
    printf("Computing research skills:%d\n", gradeComputing);
    int results = (gradeProg + gradeRDB + gradeWeb + gradeSoftw + gradeComputing) / 5;

    if (results >= 0.0 && results <= 39.4)
    {
        printf("FAIL. Score: %d\n", results);
    }
    else if (results >= 39.5 && results <= 49.4)
    {
        printf("3rd. Score: %d\n", results);
    }
    else if (results >= 49.5 && results <= 59.4)
    {
        printf("Lower Second-Class. Score: %d\n", results);
    }
    else if (results >= 59.5 && results <= 69.4)
    {
        printf("Upper Second-Class. Score: %d\n", results);
    }
    else if (results >= 69.5 && results <= 100)
    {
        printf("First Class. Score: %d\n", results);
        printf("Awarded with prize!\n");
    }

    return 0;
}

/*
Percentage Range Classification
0.0% - 39.4% FAIL
39.5% - 49.4% 3rd
49.5% - 59.4% 2.2 (Lower Second-Class)
59.5% - 69.4% 2.1 (Upper Second-Class)
69.5% - 100% 1st (First-Class)
*/