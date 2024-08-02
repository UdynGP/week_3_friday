/*
write a program that you are given a integer N, and your task is to print all the integers starting from 1 till N (N. inclusive).
For example -:
   Input: array = 4
           Output : array = 1,2,3,4
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            printf("%d, ", i);
        }
        else
        {
            printf("%d", i);
        }
    }
    return 0;
}