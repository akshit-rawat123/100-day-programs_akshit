//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix must be square");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}