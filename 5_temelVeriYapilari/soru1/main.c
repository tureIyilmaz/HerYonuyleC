#include <stdio.h>

int main() {
    char lowercase;
    
    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase); 
    printf("Lowercase letter entered: %c  Uppercase equivalent: %c\n", lowercase, lowercase - 32);  
    return 0;
}
