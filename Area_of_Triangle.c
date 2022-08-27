/*Write a program to find area of triangle(a=h*b*.5)  a = area, h = height, b = base*/
#include<stdio.h>
int main()
{
int h,b;
float a;

printf("Enter The Height Of The Triangle : ");
scanf("%d",&h);

printf("Enter The Base Of The Triangle : ");
scanf("%d",&b);

a=h*b*.5;

printf("The Area Of The Triangle Is %.2f",a);

return 0;

}