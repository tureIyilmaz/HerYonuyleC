#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    
    printf("Enter the number to print the pattern: ");
    scanf("%d", &number);
    
    int j = 0; 
    while (j < number) {
        int i = number;
        while (i > j) {
            printf("*");
            i--;
        }
        printf("\n");
        j++;
    }
    
    return 0;
}
