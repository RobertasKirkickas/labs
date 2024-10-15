#include <stdio.h>
#include <time.h>

// recursive function
int recursiveFactorial(int n)
{
    clock_t startTime, endTime;
    double runTime;

    startTime = clock();
    if (n == 0 || n == 1) // base case
    {
        endTime = clock();
        runTime = (double)(startTime - endTime) / CLOCKS_PER_SEC;
        printf("Time spent for Recursive function: %fms\n", runTime);
        return 1;
    }
    else
    {
        return n * recursiveFactorial(n - 1); // recursive case
    }
}

// non-recursive function
int nonRecursiveFactorial(int n)
{
    clock_t startTime, endTime;
    double runTime;
    int res = 1;
    for (int i = 1; i <= n; i++) // n - iterates x times of requested number
    {
        res *= i; // multiplies the res by current number
    }
    endTime = clock();
    runTime = (double)(startTime - endTime) / CLOCKS_PER_SEC;
    printf("Time spent for Non-Recursive function: %fms\n", runTime);
    return res;
}

int main()
{
    int num = 7;
    printf("The Recursive factorial of %d is %d\n", num, recursiveFactorial(num));
    printf("The Non-Recursive factorial of %d is %d\n", num, nonRecursiveFactorial(num));

    return 0;
}
