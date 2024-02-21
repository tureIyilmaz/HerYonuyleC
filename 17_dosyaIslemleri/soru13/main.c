#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char** argv) {
    char *kaynakDosyaAdi = "kaynak.txt";
    char *hedefDosyaAdi = "hedef.txt";
    
    FILE* kaynakDosya = fopen(kaynakDosyaAdi, "rb");
    if (kaynakDosya == NULL) {
        printf("Kopyalanacak dosya bulunamadi\n");
        return EXIT_FAILURE;
    }
        
    FILE* hedefDosya = fopen(hedefDosyaAdi, "wb");
    if (hedefDosya == NULL) {
        printf("%s dosyasi olustururken bir hata olustu\n", hedefDosyaAdi);
        fclose(kaynakDosya);
        return EXIT_FAILURE;
    }

    char buffer[BUFFER_SIZE];
    size_t okunan_byte_sayisi;
    while ((okunan_byte_sayisi = fread(buffer, 1, BUFFER_SIZE, kaynakDosya)) > 0) {
        fwrite(buffer, 1, okunan_byte_sayisi, hedefDosya);
    }

    printf("\nKopyalama islemi tamamlandi...\n");

    fclose(kaynakDosya);
    fclose(hedefDosya);
    
    return EXIT_SUCCESS;
}
