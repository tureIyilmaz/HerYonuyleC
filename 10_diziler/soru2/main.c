#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    int array[SIZE];
    
    printf("Enter 5 numbers to determine if they are odd or even:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &array[i]);
    }
  
    printf("Odd numbers: ");
    for (int i = 0; i < SIZE; i++) {
        if (array[i] % 2 != 0) {
            printf("%d ", array[i]);
        }
    }
    
    printf("\nEven numbers: ");
    for (int i = 0; i < SIZE; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
      
    return 0;
}
