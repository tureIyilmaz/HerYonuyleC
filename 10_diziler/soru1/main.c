#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
    srand(time(NULL)); 
    
    int i;
    float numbers[10], total = 0;
    
    for (i = 0; i < 10; i++) {
        numbers[i] = (float)((rand() % 1000) * 1.1);
        printf("%20.2f\n", numbers[i]); 
        total += numbers[i]; 
    }
    
    printf("Total: %13.2f\n", total); 
    return 0;
}
