

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int i;
    
    char *ptr, karakterDizisi[12] = "heryonuylec";
    ptr = karakterDizisi;
    
    for( i = 0; i < 4; i++)
        *(ptr++) = karakterDizisi[i + 7];
     puts(karakterDizisi);
     puts(ptr);
    for( i = 0; i < 4; i++)
        karakterDizisi[i] = *(ptr++);
    
    puts(karakterDizisi);
    puts(ptr);
    
    return 0;
}

