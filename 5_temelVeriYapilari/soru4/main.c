#include <stdio.h>
#include <ctype.h>

#define SIZE 50

int main(int argc, char** argv) {
    char text[SIZE] = {};
    
    printf("Enter the text you want to be written in lowercase and without numbers:");
    gets(text);
    
    for(int i = 0; i < SIZE; i++) {
        if(isalpha(text[i]) != 0) {
            if(text[i] < 'a') {
                //printf("%c", tolower(text[i]));
                printf("%c", text[i] + 32);
            }
            else{
                printf("%c", text[i]);
            }
            
        }
    }      
    printf("\n");
    return 0;
}
