/*Write a program to read marks from keyboard and your
program should display equivalent grade according to
following table(if else ladder)
Marks Grade : 100 - 80 Distinction
 79 - 60 First Class
 59 - 40 Second Class
 < 40 Fail */

#include <stdio.h>

int main()
{
    int a;

    printf("Enter the marks out of 100 : ");
    scanf("%d", &a);

    if (a > 100 || a < 0)
        printf("Please enter valid marks.");
    else if (a >= 80 && a <= 100)
        printf("You are pass with Distinction.");
    else if (a >= 60 && a <= 79)
        printf("You are pass with First Class.");
    else if (a >= 40 && a <= 59)
        printf("You are pass with Second Class.");
    else if (a < 40)
        printf("You are Fail.");

    return 0;
}
