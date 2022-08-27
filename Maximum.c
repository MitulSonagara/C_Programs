/*Write a program to read three numbers from keyboard and find out maximum out of these three. (nested if else) */

#include<stdio.h>

int main()
{
    int a,b,c,max=0;

    printf("Enter The First Number : ");
    scanf("%d",&a);

    printf("Enter The Second Number : ");
    scanf("%d",&b);

    printf("Enter The Third Number : ");
    scanf("%d",&c);

    if (a>max)
    {
        max=a;
        if (b>max)
        {
            max=b;
            if (c>max)
            {
                max=c;
            }
            
        }
        
    }
    
    printf("The Maximum Out Of Entered Three Numbers Is %d",max);
    
    return 0;
}