#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 0;
    
    printf("Up to which number do you want to find multiples of 3: ");
    scanf("%d", &number);
    

    for (int i = 3;i <= number; i +=3) {
        printf("%d\n", i);
    }
        
    
    return 0;
}
