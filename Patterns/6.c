#include <stdio.h>
int main()
{
int n;
printf("Enter the number of row:");
scanf("%d", &n);
for (int i = n; i >= 1; i--)
{
for (int j = i; j >= 1; j--)
{
printf("%d", i);
}
printf("\n");
}
return 0;
}
