// To check whether a given number prime or not. //

#include <stdio.h>

int main()
{
    int n, i, prime = 1;
    printf("Enter the Positive integer : ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        // condition for non prime
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime nor non-prime.\n");
    }
    else
    {
        if (prime == 1)
        {
            printf("The entered number is prime number.\n");
        }
        else
        {
            printf("The entered number is non-prime number.\n");
        }
    }

    return 0;
}