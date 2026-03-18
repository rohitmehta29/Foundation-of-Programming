#include <stdio.h>
int main(){
    int num,a,b,c,sum,n;
    printf("Enter a number:");
    scanf("%d", &num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;

    sum=a*a*a+b*b*b+c*c*c;
    if(num==sum){
        printf("The number is an Armstrong number.");
    }
    else{
        printf("The number is not an Armstrong number.");
    }
}