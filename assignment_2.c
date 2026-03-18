#include <stdio.h>
int main()
{
    int num1,num2;
    printf("1) Addition\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("Choose serial number of operation you want to perform=");
    int choice;
    scanf("%d",&choice);
    printf("Enter first number=");
    scanf("%d",&num1);
    printf("Enter second number=");
    scanf("%d",&num2);
    switch (choice)
    {
        case 1:
        printf("Addition of %d and %d id %d",num1,num2,num1+num2);
        break;
        case 2:
        printf("Subtraction of %d and %d is %d ",num1,num2,num1-num2);
        break;
        case 3:
        printf("Multiplication of %d and %d is %d",num1,num2,num1*num2);
        break;
        case 4:
        if (num2 != 0){
            printf("division of %d and %d is %f",num1,num2,(float)num1/num2);
        }
        else{
            printf("Error:division by 0 is not allowed");    
        }
        
    }

    return 0;

}