/* 2.Write a function strindex(s,t) to find the index of string t into string
s.If s="I am using unix" and t"am", then function returns 3.*/
#include <stdio.h>
#include <string.h>
int strindex(char *s, char *t)
{
    int l1, l2, diff, i;
    l1 = strlen(s);
    l2 = strlen(t);
    diff = l1 - l2;
    for (i = 0; i <= diff; i++)
    {
        if (strncmp(s + i, t, l2) == 0)
        {
            return i;
        }
    }
}
int main()
{
    int i, diff;
    char str[100], sub[50];
    printf("Enter the the main string: ");
    gets(str);
    printf("Enter the sub string to be search: ");
    gets(sub);
    diff = strlen(str) - strlen(sub);
    i = strindex(str, sub);
    if (i <= diff)
    {
        printf("String found at index: %d", i + 1);
    }
    else
    {
        printf("There is no match.");
    }
    return 0;
}
