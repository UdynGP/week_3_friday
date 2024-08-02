/*
You are given an array A containing the age of persons in your locality, and your task is to find and return and array containing the age of persons that are over 18 (18 included)
Note --: In the Output array, the age should be in the same order as in input array
For example -:
   Input: A =  11,23,3,45,72,68
           Output: A = 23,45,72,68
*/
#include <stdio.h>

void filter_ages(int input[], int input_size, int output[], int *output_size)
{
    *output_size = 0; // Initialize output size to zero
    for (int i = 0; i < input_size; i++)
    {
        if (input[i] >= 18)
        {
            output[*output_size] = input[i]; // Add to output array if age is 18 or above
            (*output_size)++;                // Increase the count of output array
        }
    }
}
int main()
{
    int input[100];  // Input array large enough to hold up to 100 ages
    int n;           // Number of entries the user will input
    int output[100]; // Output array large enough to hold all valid ages
    int output_size; // To hold the size of the output array

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    if (n > 100)
    {
        printf("Sorry, the maximum number of persons allowed is 100.\n");
        return 1; // Early exit if the input exceeds the predefined array size
    }

    printf("Enter the ages of the persons:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("Age %d: ", i + 1);
        scanf("%d", &input[i]);
    }

    // Function to filter ages
    filter_ages(input, n, output, &output_size);

    // Print the output array
    for (int i = 0; i < output_size; i++)
    {
        printf("%d", output[i]);
        if (i < output_size - 1)
        {
            printf(", ");
        }
    }

    return 0;
}