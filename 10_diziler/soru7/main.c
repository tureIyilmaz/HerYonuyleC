#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int matris[3][3] = {{3, 5, 6},{4, 2, 3},{4, 8, 7}};
    
        for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ;j++){
            printf("%d " , matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}

