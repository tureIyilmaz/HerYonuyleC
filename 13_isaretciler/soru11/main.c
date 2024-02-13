#include <stdio.h>

char* my_strcat(char* dest, const char* src);

int main() {
    char source[] = "World!"; 
    char destination[] = "Hello, "; 

    my_strcat(destination, source);

    printf("%s\n", destination);

    return 0;
}

char* my_strcat(char* dest, const char* src) {
    char* original_dest = dest; 
    
    while (*dest != '\0') {
        dest++; 
    }
    

    while (*src != '\0') {
        *dest = *src; 
        src++; 
        dest++;
    }
    
    *dest = '\0';
    
    return original_dest; 
}
