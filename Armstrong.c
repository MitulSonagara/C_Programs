// 10.Write a program to print all Armstrong numbers in a given range.
#include <stdio.h>
void armstrong(int start, int end)
{
int temp, sum, r;
for (int i = start; i <= end; i++)
{
temp = i;
sum = 0;
while (temp != 0)
{
r = temp % 10;
temp = temp / 10;
sum = sum + (r * r * r);
}
if (sum == i)
{
printf("%d\n", i);
}
}
}
int main()
{
int start, end;
label:
printf("\nInput starting number of range: ");
scanf("%d", &start);
printf("Input ending number of range: ");
scanf("%d", &end);
if (start > end)
{
printf("\nPlease!!Enter valid range.");
goto label;
}
armstrong(start, end);
return 0;
}