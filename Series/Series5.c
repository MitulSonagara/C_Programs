/*Write a program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!......-x^9/9*/
#include <stdio.h>
#include <math.h>
int main()
{
float x, sum = 1, fact = 1;
printf("Enter the value of x: ");
scanf("%f", &x);
for (int i = 1; i <= 9; i++)
{
fact = 1;
for (int j = i; j >= 1; j--)
{
fact = fact * j;
}
sum += pow(-x, i) / fact;
}
printf("The sum of the series is %f", sum);
return 0;
}