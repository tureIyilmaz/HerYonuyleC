#include <stdio.h>
#include <string.h>


int main(int argc, char** argv) {
    
    char duz[20];
    
    printf("Tersini istedigin kelimeyi gir:");
    scanf("%s", duz);
    
    printf("%s", strrev(duz));
    
    return 0;
}

