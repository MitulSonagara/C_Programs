// 7.Write a C program to find 1+(1/2!)+(1/3!)+(1/4!)+.....+(1/n!).
#include <stdio.h>
int main()
{
int n, fact;
float sum = 0;
printf("\nEnter the value of n: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++)
{
fact = 1;
for (int j = i; j > 0; j--)
{
fact = fact * j;
}
sum = sum + (1.0 / fact);
}
if (n == 1 || n == 0)
{
printf("\n(1/1!) OR (1/0!) = 1.00");
}
else if (n == 2)
{
printf("\n(1/1!)+(1/2!) = %f", sum);
}
else if (n == 3)
{
printf("\n(1/1!)+(1/2!)+(1/3!) = %f", sum);
}
else
{
printf("\n(1/1!)+(1/2!)+...+(1/%d!) = %f", n, sum);
}
return 0;
}