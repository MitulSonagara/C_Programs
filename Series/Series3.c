/*Write a C program to generate the series up to term < 200 
 1 – 4 + 9 – 16 + 25 …. */

 #include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the range of number(Limit):");
    scanf("%d", &n);
    while (i <= n)
    {
        if(i%2==0)
        printf("%d,", -i * i);
        else 
        printf("%d,", i * i);
        i++;
    }
}