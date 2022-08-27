// 3.Write a function atoi(s) to convert a string of digits into a number.
#include <stdio.h>
#include <string.h>
#include<math.h>
int myatoi(char *str)
{
int sum = 0;
for (int i = 0; str[i] != '\0'; ++i)
{
sum = sum * 10 + str[i] - '0';
}
return sum;
}
int main()
{
int result;
char str[20];
printf("Enter the string: ");
scanf("%s", str);
printf("String value: %s\n", str);
result = myatoi(str);
printf("Integer value: %d\n", result);
return 0;
}
