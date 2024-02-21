#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
}Nokta;

void main(void) {

    Nokta noktalar[30];
    Nokta nokta;
    
    FILE *dosya;
    dosya = fopen("data.bin", "ab+");
    
    int i;
    for(i = 0; i < 30; i++){
        noktalar[i].x = noktalar[i].y = i * i;
    }
    
    fwrite(noktalar, sizeof(Nokta), 30, dosya);
    rewind(dosya);
    
    fread(&(nokta), sizeof(Nokta), 1, dosya);
    printf(" %d %d\n",nokta.x, nokta.y);
    
    fseek(dosya, 2 * sizeof(Nokta), SEEK_CUR);
    fread(&(nokta), sizeof(Nokta), 1, dosya);
    
    printf(" %d %d\n",nokta.x, nokta.y);
    fseek(dosya, 5 * sizeof(Nokta), SEEK_SET);

    fread(&(nokta), sizeof(Nokta), 1, dosya);
    printf(" %d %d\n",nokta.x, nokta.y);
    
    fwrite(&(noktalar[10]), sizeof(Nokta), 10, dosya);
    fseek(dosya, -5 * sizeof(Nokta), SEEK_END);
    
    fread(&(nokta), sizeof(Nokta), 1, dosya);
    printf(" %d %d\n",nokta.x, nokta.y);
    
    fclose(dosya);
}

