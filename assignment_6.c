#include<stdio.h>
int fact(int num)
{
    if (num<0)
    return -1;
    if (num==0 || num == 1)
    return 1;
    return num*fact(num-1);
}

    int main()
    {
        int num,factorial;
        printf("Enter a Number:");
        scanf("%d", &num);
        factorial=fact(num);
        if (factorial == -1)
            printf("Factorial is not defined for negative numbers.");
        else
        printf("Factorial of %d is %d", num, factorial);

    }


