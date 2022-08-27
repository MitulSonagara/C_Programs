/*Write a C program to find factorial of a given number. */

#include <stdio.h>

int main()
{
    int a, f = 1;

    printf("Enter the number to find factorial of : ");
    scanf("%d", &a);

    for (int i = a; i > 0; i--)
    {
        f = f * i;
    }

    printf("The factorial of %d is %d .", a, f);

    return 0;
}
