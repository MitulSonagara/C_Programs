/*Write a C program to read no 1 to 7 and print relatively
day Sunday to Saturday*/

#include<stdio.h>

int main()
{
    int a, b;
label:
    printf("Enter Any Number Between 1 to 7.\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Today Is Sunday");
        break;

    case 2:
        printf("Today Is Monday");
        break;

    case 3:
        printf("Today Is Tuesday");
        break;

    case 4:
        printf("Today Is Wednesday");
        break;

    case 5:
        printf("Today Is Thursday");
        break;

    case 6:
        printf("Today Is Friday");
        break;

    case 7:
        printf("Today Is Saturday");
        break;

    default:
        printf("Please Enter The Valid Number");
        break;
    }

   /* printf("\nEnter 0 For Next And Any NUmber For Quit.");
    scanf("%d", &b);
    if (b == 0)
        goto label;*/
    return 0;
}