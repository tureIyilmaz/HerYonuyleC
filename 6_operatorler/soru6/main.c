

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int x = 5, y = 6, w = 5, z = 4;
    
    printf(x < y ? "x<y\n" : "x >= y\n");
    printf(x > z ? "x>z\n" : "x <= z\n");
    printf(w != x ? "w!=x\n" : "w==x\n");
    return 0;
}

