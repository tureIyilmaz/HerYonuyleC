#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int numbers[10] = {25, 22, 17, 19, 47, 3, 98, 5, 124, 10};
    int input = 0;
    
    printf("Enter a number: ");
    scanf("%d", &input);
    
    printf("Numbers greater than %d: ", input);
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > input) {
            printf("%d\t", numbers[i]);
        }
    }
    
    return 0;
}
