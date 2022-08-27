/*Write a program that performs as calculator ( addition, multiplication, division, subtraction). */

#include <stdio.h>

int main()
{
    int a, b, c, d, f;

    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

label:
    printf("\n\nEnter 1 for addition.");
    printf("\nEnter 2 for subtraction.");
    printf("\nEnter 3 for division.");
    printf("\nEnter 4 for multiplication.\n");

    scanf("%d", &c);

    if (c == 1)
        printf("\nAddition of entered number is %d", a + b);
    else if (c == 2)
        printf("\nSubstraction of entered number is %d", a - b);
    else if (c == 3)
        printf("\nDivision of entered number is %d", a / b);
    else if (c == 4)
        printf("\nMultiplication of entered number is %d", a * b);
    else
        printf("\nYou entered wrong number");

    printf("\nEnter '0' for do other operation.\n");
    scanf("%d", &d);

    if (d == 0)
        goto label;

    return 0;
}