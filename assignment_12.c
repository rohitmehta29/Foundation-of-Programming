#include<stdio.h>
int gcd(int a,int b)
{
    while(b !=0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;

}
int scd(int a,int b)
{   
    int min = (a < b) ? a : b;
    for(int i=2; i<=min ;i++)
    {
        if(a%i==0 && b%i==0)
        return i;
    }
    return 1;
}
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d is %d", num1, num2, gcd(num1,num2));
    printf("SCD of %d and %d is %d",num1,num2,scd(num1,num2));
}