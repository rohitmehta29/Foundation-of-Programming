#include <stdio.h>
int main() {
    int i;
    printf("Enter a number of which multiplication table you want =");
    scanf("%d", &i);
    for (int j=1; j<=10; j++){
        printf("%dx%d=%d\n", i,j,i*j);
    }
    return 0;
}