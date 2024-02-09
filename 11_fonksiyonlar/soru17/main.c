#include <stdio.h>
#include <stdlib.h>

void matriSirala(int[][3],int,int);

int main(int argc, char** argv) {
    
    int matris[3][3] = {{18, 2, 9}, {11, 8, 5}, {3, 12, 0}};
    int satir = 3, sutun = 3;
    
    matrisSirala(matris,satir,sutun);
    
    return 0;
}

void matrisSirala(int matris[][3],int r,int c){
    int tekMatris[9] = {0}, sayac = 0, i, j, gecici;
    
    for(i = 0; i < r; i++ ){
        for(j = 0; j < c; j++){            
            tekMatris[sayac] = matris[i][j];
            sayac++;
        }
    }
   
    for(i = 0; i < r*c; i++ ){
        for(j = 0; j < r*c-1-i; j++){          
            if(tekMatris[j] < tekMatris[j+1]){
                gecici = tekMatris[j];
                tekMatris[j] = tekMatris[j+1];
                tekMatris[j+1] = gecici;
            }
        }
    }
    sayac =0;    
    for(i = 0; i < r; i++ ){
        for(j = 0; j < c; j++){           
            matris[i][j] = tekMatris[sayac];
            sayac++;
        }
    }
    
        for(i = 0; i < r; i++ ){
        for(j = 0; j < c; j++) {           
            printf("%3d ",matris[i][j]);
        }
        printf("\n");
    }          
}

