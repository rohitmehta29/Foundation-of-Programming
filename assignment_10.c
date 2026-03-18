#include <stdio.h>
int main()
{
    int num1,num2;
    int addition,subtraction,multiplication,division,power,factorial;
    printf("1. Additon\n");
    printf("2. Subtraction\n");    
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Factorial\n");
    printf("Enter your choice:");

    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter two numbers:");
        scanf("%d %d", &num1, &num2);
        addition = num1 + num2;
        printf("Addition is %d\n", addition);
        break;
    case 2:
        printf("Enter two numbers:");
        scanf("%d %d", &num1, &num2);
        subtraction = num1 - num2;
        printf("Subtraction is %d\n", subtraction);
        break;
    case 3:
        printf("Enter two numbers:");
        scanf("%d %d", &num1, &num2);
        multiplication = num1 * num2;
        printf("Multiplication is %d\n", multiplication);
        break;
    case 4:
        printf("Enter two numbers:");
        scanf("%d %d", &num1, &num2);
        division = num1 / num2;
        printf("Division is %d\n", division);
        break;
    case 5:
        printf("Enter base and power:");
        scanf("%d %d", &num1, &num2);
        power = 1;
        for (int i = 0; i < num2; i++)
            power *= num1;
        printf("Power is %d\n", power);
    case 6:
        printf("Enter a number:");
        int n;
        scanf("%d", &n);
        factorial = 1;
        for (int i = 1; i <= n; i++)
            factorial *= i;
        printf("Factorial is %d\n", factorial);
        break;
    
    default:
        break;
    }
    return 0;
}