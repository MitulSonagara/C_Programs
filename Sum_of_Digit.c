/*Write a program to read a four digit integer and print the
sum of its digits.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, reminder, sum = 0;

    printf("Enter A Four Digit Integer : ");
    scanf("%4d", &num);

    while (num > 0)
    {
        reminder = num % 10;
        sum = sum + reminder;
        num = num / 10;
    }

    printf("The Sum Of The Digits Of Entered Number Is %d", sum);
    return 0;
}