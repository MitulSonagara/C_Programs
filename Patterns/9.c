#include <stdio.h>
int main()
{
int n;
printf("Enter the number of rows: ");
scanf("%d", &n);
char c = 'A';
for (int i = n; i >= 1; i--)
{
c = 'A';
for (int j = i; j >= 1; j--)
{
printf("%c ", c);
c++;
}
printf("\n");
}
return 0;
}
