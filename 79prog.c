//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, sum;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (sum = 0; sum <= rows + cols - 2; sum++) {

        if (sum % 2 == 0) {
            for (i = rows - 1; i >= 0; i--) {
                j = sum - i;

                if (j >= 0 && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        } else {
            for (j = cols - 1; j >= 0; j--) {
                i = sum - j;

                if (i >= 0 && i < rows) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }

    return 0;
}