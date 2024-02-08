#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int matrix[5][5] = {};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i + j + 1) % 5 != 0) {
                matrix[i][j] = (i + j + 1) % 5;
            } else {
                matrix[i][j] = 5;
            }
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
