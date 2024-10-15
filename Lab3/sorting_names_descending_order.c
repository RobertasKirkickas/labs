#include <stdio.h>
#include <string.h>

void sortDescending(char A[][20], int n)
{
    char temp[20]; // Temporary variable to hold strings for swapping
    for (int j = n - 1; j >= 1; j--)
    { // Outer loop starts from the last element
        for (int i = 0; i < j; i++)
        { // Inner loop goes from 0 to j-1
            if (strcmp(A[i], A[i + 1]) < 0)
            {
                strcpy(temp, A[i]); // Swap A[i] and A[i+1]
                strcpy(A[i], A[i + 1]);
                strcpy(A[i + 1], temp);
            }
        }
    }
}

int main()
{
    // Define an array of strings (8 elements)
    char A[8][20] = {"Matthew", "Andrew", "Dylan", "Melody", "Nancy", "Imran", "Jacob", "Juliet"};
    int n = 8; // Number of elements in the array

    // Call the sorting function to sort in descending order
    sortDescending(A, n);

    // Print the sorted array
    printf("Sorted names in descending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", A[i]);
    }

    return 0;
}
