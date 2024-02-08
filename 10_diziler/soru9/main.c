#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int matris[5][5] = {},i,j;
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5 ; j++){
            if(i == j){
                matris[i][j] = 1;
            }
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}

