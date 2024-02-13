#include <stdio.h>
#include <stdlib.h>

void my_strcpy(char* dizi1, char* dizi2);

int main(int argc, char** argv) {

    char* karakterDizisi = "SIYAH BEYAZ BESIKTAS\n";
    char* karakterDizisiKopyasi[50];
    my_strcpy(karakterDizisi, karakterDizisiKopyasi);
    
    printf("%s", karakterDizisiKopyasi);
    return (EXIT_SUCCESS);
}

void my_strcpy(char* dizi1, char* dizi2) {
    
    int sayac = 0;
    char a = *dizi1;
    while(*(dizi1 + sayac) != '\0') {
        sayac++;
    }
    
    for(int i = 0; i < sayac; i++) {
        *(dizi2 + i) = *(dizi1 + i);
    }
    *(dizi2 + sayac) = '\0';
}

