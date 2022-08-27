/*Write a C program to enter a distance in to kilometer and 
convert it in to meter, feet, inches and centimetre*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float km,kmtometer,kmtofeet,kmtoinches,kmtocm;
    

    printf("Enter The Distance In To Kilometer : ");
    scanf("%f",&km);

    kmtometer=1000*km;
    kmtofeet=3280.84*km;
    kmtoinches=39370.1*km;
    kmtocm=100000*km;

    printf("Distance In Meter Is %f\n",kmtometer);
    printf("Distance In Feet Is %f\n",kmtofeet);
    printf("Distance In Inches Is %f\n",kmtoinches);
    printf("Distance In CM Is %f\n",kmtocm);

    return 0;
}