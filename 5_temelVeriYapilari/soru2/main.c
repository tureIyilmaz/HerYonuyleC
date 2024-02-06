#include <stdio.h>
#include <ctype.h>

#define SIZE 50

int main(int argc, char** argv) {
    char text[SIZE] = {};
    
    printf("Enter the text you want to be written in uppercase and without numbers:");
    gets(text);
    
    for(int i = 0; i < SIZE; i++) {
        if(isalpha(text[i]) != 0) {
            if(text[i] >= 'a') {
                text[i] -= 32; 
            }
            printf("%c", text[i]);
        }
    }      
    printf("\n");
    return 0;
}
