#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 50

int main() {
    char text[SIZE];
    int sum = 0;
    
    printf("Enter the numbers you want to sum up:\n");
    gets(text);
    
    for(int i = 0; text[i] != '\0'; i++) {
        if(isdigit(text[i]) != 0){
            sum += text[i] - '0'; 
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}
