#include <stdio.h>

int main(int argc, char** argv) {
    int number1, number2, large, small;
    
    printf("Enter two numbers you want to divide: ");
    scanf("%d %d", &number1, &number2);
    
    large = (number1 >= number2) ? number1 : number2;
    small = (number1 <= number2) ? number1 : number2;
    
    printf("%d is the divisor.\n%d is the quotient.\n%d is the remainder.\n", small, large / small, large % small);
    
    return 0;
}
