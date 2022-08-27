/*

Print a multiplication tabel of a number enterd by the user in pretty form

Example:

Inpute:
Enter the number you want miltiplication tabel of:
6

Outputy:
6 * 1 = 6
6 * 2 = 12
.
.
.
6 * 10 = 60

*/

#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter the number you want multiplication table of:");
    scanf("%d",&a);

    for (int t = 1; t < 11; t++)
    {
        b=a*t;
        printf("%d * %d = %d\n",a,t,b);
    }
    

}

