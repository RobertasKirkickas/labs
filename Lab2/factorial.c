#include <stdio.h>

// recursive function
int recursiveFactorial(int n)
{
    if (n == 0 || n == 1) // base case
    {
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
    int res = 1;
    for (int i = 1; i <= n; i++) // n - iterates x times of requested number
    {
        res *= i; // multiplies the res by current number
    }
    return res;
}

int main()
{
    int num = 7;
    printf("The Recursive factorial of %d is %d\n", num, recursiveFactorial(num));
    printf("The Non-Recursive factorial of %d is %d\n", num, nonRecursiveFactorial(num));

    return 0;
}
