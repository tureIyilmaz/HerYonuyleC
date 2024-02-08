#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int matris[4][4];
    int i,j, girilenSayi;
    
    printf("Bir sayi giriniz:");
    scanf("%d", &girilenSayi);
      
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            matris[i][j] = rand()%10;
                if(girilenSayi == matris[i][j]){
                    printf("%d satir %d sutun degeri girdiginiz degerdir.\n", i + 1, j + 1);
            }
        }
    }
    
    return 0;
}
