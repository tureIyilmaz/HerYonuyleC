#include <stdio.h>
#include <stdlib.h>

int main() {
    int number1 = 0, number2 = 0;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    
    printf("The larger number is: %d", (number1 > number2) ? number1 : number2);
    
    return 0;
}
