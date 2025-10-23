#include <stdio.h>

int main() {
    int matrix[3][3] = {{4, 9, 2},{8, 3, 5},{1, 6, 7}};

    int i, j, max;
    max = matrix[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    printf("The 3x3 Matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nThe maximum number in the matrix is: %d\n", max);

    return 0;
}

