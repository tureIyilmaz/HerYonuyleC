#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    
    printf("Enter the number to print the pattern: ");
    scanf("%d", &number);
    
    for (int j = 0; j < number; j++) {
        for (int i = number; i > j; i--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
