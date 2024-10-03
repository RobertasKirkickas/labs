#include <stdio.h>

int getValidGrade(const char *moduleName)
{
    int grade;
    do
    {
        printf("Enter your score for %s (0-100):\n", moduleName);
        scanf("%d", &grade);
        if (grade < 0 || grade > 100)
        {
            printf("Invalid input. Please enter a score between 0 and 100.\n");
        }
    } while (grade < 0 || grade > 100);
    return grade;
}

int main()
{

    int gradeProg, gradeRDB, gradeWeb, gradeSoftw, gradeComputing;

    // Getting valid grades from the user
    gradeProg = getValidGrade("Advanced Programming");
    gradeRDB = getValidGrade("Relational Databases");
    gradeWeb = getValidGrade("Web Design");
    gradeSoftw = getValidGrade("Software Engineering");
    gradeComputing = getValidGrade("Computing Research Skills");

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
    else
    {
        printf("Something went wrong.");
    }

    return 0;
}
