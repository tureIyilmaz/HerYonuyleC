
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    
    int i,j;
    for(i = 8; i>=0 ; i--) {
        for(j = 4; j>=abs(4-i); j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}

