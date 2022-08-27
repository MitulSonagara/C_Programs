/*Write a code to find the fibonacci series of entered terms */

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter the number of terms of fibonacci series:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
