#include <stdio.h>
#include <string.h>

// void sortDescending(char A[][20], int n)
// {
//     char temp[20]; // Temporary variable to hold strings for swapping
//     for (int j = n - 1; j >= 1; j--)
//     { // Outer loop starts from the last element
//         for (int i = 0; i < j; i++)
//         { // Inner loop goes from 0 to j-1
//             if (strcmp(A[i], A[i + 1]) < 0)
//             {
//                 strcpy(temp, A[i]); // Swap A[i] and A[i+1]
//                 strcpy(A[i], A[i + 1]);
//                 strcpy(A[i + 1], temp);
//             }
//         }
//     }
// }

void insertionSort(char A[][20], int n)
{
    char temp[20];
    int i, j;
    for (i = 1; i < n; i++)
    {
        // Initialize j as i
        j = i;

        // While j > 0 and A[j-1] is greater than A[j], swap them
        while (j > 0 && strcmp(A[j - 1], A[j]) > 0)
        {
            // Swap A[j] and A[j-1]
            strcpy(temp, A[j]);
            strcpy(A[j], A[j - 1]);
            strcpy(A[j - 1], temp);

            // Move to the previous element
            j--;
        }
    }
}

int main()
{
    // Define an array of strings (8 elements)
    char A[8][20] = {"Matthew", "Andrew", "Dylan", "Melody", "Nancy", "Imran", "Jacob", "Juliet"};
    int n = 8; // Number of elements in the array

    // Call the sorting function to sort in descending order
    // sortDescending(A, n);

    // Call insertion sort
    insertionSort(A, n);

    // Print the sorted array
    printf("Sorted names in output:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", A[i]);
    }

    return 0;
}
