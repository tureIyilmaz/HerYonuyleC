#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
    while (1) {      
        srand(time(NULL));
        int zar1 = rand() % 6;
        int zar2 = rand() % 6;
        
        printf("Birinci zar: %d\n", zar1);
        printf("Ikinci zar: %d\n", zar2);

        if (zar1 == zar2) {
            printf("Cift zar attiniz. Tebrikler\n");
        }

        printf("Devam etmek icin Enter tusuna basin...");
        getchar(); 
    }   
   
    return 0;
}
