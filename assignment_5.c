#include <stdio.h>


void matrixAddition() {
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    printf("\nEnter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter Matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter Matrix B:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}


void saddlePoint() {
    int a[10][10], r, c, i, j;
    int min, col, found = 0;

    printf("\nEnter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++) {
        min = a[i][0];
        col = 0;

        for(j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        int isSaddle = 1;
        for(j = 0; j < r; j++) {
            if(a[j][col] > min) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("Saddle Point = %d\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("No Saddle Point found\n");
}


void inverseMatrix() {
    float a[2][2], det;

    printf("\nEnter 2x2 matrix:\n");
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%f", &a[i][j]);

    det = (a[0][0]*a[1][1]) - (a[0][1]*a[1][0]);

    if(det == 0) {
        printf("Inverse not possible (det = 0)\n");
        return;
    }

    printf("Inverse Matrix:\n");
    printf("%.2f  %.2f\n",  a[1][1]/det, -a[0][1]/det);
    printf("%.2f  %.2f\n", -a[1][0]/det,  a[0][0]/det);
}


void magicSquare() {
    int a[10][10], n, i, j;
    int sumRow, sumCol, sumDiag1 = 0, sumDiag2 = 0;
    int isMagic = 1;

    printf("\nEnter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int targetSum = 0;
    for(j = 0; j < n; j++)
        targetSum += a[0][j];

    for(i = 0; i < n; i++) {
        sumRow = sumCol = 0;

        for(j = 0; j < n; j++) {
            sumRow += a[i][j];
            sumCol += a[j][i];
        }

        if(sumRow != targetSum || sumCol != targetSum)
            isMagic = 0;
    }

    for(i = 0; i < n; i++) {
        sumDiag1 += a[i][i];
        sumDiag2 += a[i][n-i-1];
    }

    if(sumDiag1 != targetSum || sumDiag2 != targetSum)
        isMagic = 0;

    if(isMagic)
        printf("It is a Magic Square\n");
    else
        printf("Not a Magic Square\n");
}


int main() {
    int choice;

    do {
        printf("\n===== MATRIX MENU =====\n");
        printf("1. Matrix Addition\n");
        printf("2. Saddle Point\n");
        printf("3. Inverse of 2x2 Matrix\n");
        printf("4. Magic Square Check\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: matrixAddition(); break;
            case 2: saddlePoint(); break;
            case 3: inverseMatrix(); break;
            case 4: magicSquare(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}
