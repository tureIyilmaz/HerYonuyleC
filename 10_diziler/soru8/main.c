#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int matris[3][3] = {}; 
    int satirToplam[3] = {}, sutunToplam[3] = {};
    
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ;j++)
        {
            printf("%d. satir %d.sutun degerini gir:", i+1, j+1);
            scanf("%d" , &matris[i][j]);
        }
    }
    
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ;j++){
            satirToplam[i] += matris[i][j];
            sutunToplam[j] += matris[i][j];
        }
        printf("%d nolu satir toplami: %d\n",i+1, satirToplam[i]); 
    }
    
    for(int i = 0 ; i < 3 ; i++){
        printf("%d nolu sutun toplami: %d\n",i+1, sutunToplam[i]);        
    }
    return 0;
}

