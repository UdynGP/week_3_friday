/*
write a program that take a number from the user and print the count of digits in that number
For example -:
   Input: array = 1234
           Output: 4
*/
#include <stdio.h>
int main()
{
    int n, d = 0, count = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        count++;
        n /= 10;
    }
    printf("%d", count);
    return 0;
}