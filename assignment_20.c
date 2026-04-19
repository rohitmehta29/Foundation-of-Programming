#include <stdio.h>
void swapWithPointer(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    swapWithPointer(&a, &b);
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}