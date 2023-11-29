/*Write a program to calculate simple interest 
(i = (p*r*n)/100 ) 
 i = Simple interest 
 p = Principal amount 
 r = Rate of interest 
 n = Number of years*/
 
 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     float p,r,n,i;

     printf("Enter The Principal Amount : ");
     scanf("%f",&p);

     printf("Enter The Rate Of Interest : ");
     scanf("%f",&r);

     printf("Enter The Number Of Years : ");
     scanf("%f",&n);

     i=(p*r*n)/100;

     printf("The Simple Interest Of The Entered Details Is %.3f.",i);

     return 0;
 }
