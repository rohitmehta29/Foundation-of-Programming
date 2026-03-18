#include <stdio.h>
int main()
{
    int squareroot,square,cube,prime,primefactorisation,factorial;
    printf("1. Squareroot\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Prime\n");
    printf("5. Prime Factorisation\n");
    printf("6. Factorial\n");
    printf("Enter your choice:");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    
        case 1:
        printf("Enter a number:");
        scanf("%d", &squareroot);
        printf("Square root is %d\n", squareroot*squareroot);
        break;
    case 2:
        printf("Enter a number:");
        scanf("%d", &square);
        printf("Square is %d\n", square*square);
        break;
    
    case 3:
        printf("Enter a number:");
        scanf("%d", &cube);
        printf("Cube is %d\n", cube*cube*cube);
        break;
    
    case 4:
        printf("Enter a number:");
        scanf("%d", &prime);
        if (prime <= 1) {
            printf("%d is not a prime number.\n", prime);
            break;
        }
        int isPrime = 1;
        for (int i = 2; i <= prime / 2; i++) {
            if (prime % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d is a prime number.\n", prime);
        else
            printf("%d is not a prime number.\n", prime);
        break;

        case 5:
        printf("Enter a number:");
        scanf("%d", &primefactorisation);
        printf("Prime factors of %d are: ", primefactorisation);
        int n = primefactorisation;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                printf("%d ", i);
                n = n / i;
            }
        }
        printf("\n");
        break;
    case 6:
        printf("Enter a number:");
        scanf("%d", &factorial);
        int fact = 1;
        for (int i = 1; i <= factorial; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d is %d\n", factorial, fact);
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}
