/*To find a largest digit from given number.(i.e 4 is largest in 1432)*/

#include <stdio.h>
int main()
{
    int num, remider, Largest = 0;
    printf("Enter the Number :");
    scanf("%d", &num);

    while (num > 0)
    {
        remider = num % 10;
        if (Largest < remider)
        {
            Largest = remider;
        }
        num = num / 10;
    }
    printf("The Largest Digit is :%d \n", Largest);
    return 0;
}