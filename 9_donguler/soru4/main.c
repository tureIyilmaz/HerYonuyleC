#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 0;
    
    printf("Up to which number do you want to find multiples of 3: ");
    scanf("%d", &number);
    
    int i = 0;
    
    while (i <= number) {
        if (i + 3 <= number) {
            i += 3;    
            printf("%d\n", i);
        } else {
            break;
        }
    }   
    
    return 0;
}
