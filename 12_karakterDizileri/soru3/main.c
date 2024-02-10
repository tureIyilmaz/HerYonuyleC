#include <stdio.h>
#include <string.h>


int main(int argc, char** argv) {
    
    char kelime[20];
    
    printf("Buyuk yazmak istedigin kelimeyi gir:");
    scanf("%s", kelime);
    kelime[20] = strupr(kelime);
    
    printf("%s",kelime);

    return 0;
}
