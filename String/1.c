// 1.Write a function to print a given string in reverse.
#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
printf("Enter the string: ");
gets(str);
int count = 0;
printf("The reverse string is: ");
for (int i = 1; str[i] != '\0'; i++)
{
count++;
}
for (int j = count; j >= 0; j--)
{
printf("%c", str[j]);
}
return 0;
}
