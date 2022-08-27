/*Write a C program to interchange two numbers. (without using temporary variable)*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;

    printf("Enter The First Number :");
    scanf("%d", &a);

    printf("Enter The Second Number :");
    scanf("%d", &b);

    a=a-b;
    b=a+b;
    a=b-a;

    printf("After Swaping,The First Number Is %d.\n", a);
    printf("After Swaping,The Second Number Is %d.\n", b);

    return 0;
}