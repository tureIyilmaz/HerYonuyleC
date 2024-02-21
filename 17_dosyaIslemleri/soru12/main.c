#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char *kaynakDosyaAdi = "kaynak.txt";
    char *hedefDosyaAdi = "hedef.txt";
    
    FILE* kaynakDosya = NULL;
    kaynakDosya = fopen(kaynakDosyaAdi, "r");
    if (kaynakDosya == NULL) {
        printf("Kopyalanacak dosya bulunamadi\n");
        return 0;
    }
        
    FILE* hedefDosya = NULL;
    if ((hedefDosya = fopen(hedefDosyaAdi, "w")) != NULL) {
        char character;
        while ((fscanf(kaynakDosya,"%c",&character)) != EOF) {
            fprintf(hedefDosya, "%c",character);
        }
        printf("\nKopyalama islemi tamamlandi...\n");
    }
    else {
        printf("\n%s dosyasi olustururken bir hata olustu\n", hedefDosyaAdi);
    }
    
    fclose(kaynakDosya);
    fclose(hedefDosya);
    
    return (EXIT_SUCCESS);
}
