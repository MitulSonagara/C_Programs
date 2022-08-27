/*Write a program to compute Fahrenheit from centigrade
(f=1.8*c +32)*/

#include <stdio.h>

int main()
{
    float f, c;

    printf("Enter The Temperature In centigrade : ");
    scanf("%f", &c);

    f = (1.8 * c) + 32;

    printf("The Value Of centigrade In Fahrenheit Is %f", f);

    return 0;
}