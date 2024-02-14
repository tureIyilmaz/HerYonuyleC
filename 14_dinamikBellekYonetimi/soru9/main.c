#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int *sayilar = (int *)malloc(2 * sizeof(int));
    int toplam = 0;
    
    for(int i = 0; i < 2; i++){
        printf("%d. sayiyi gir:", i + 1);
        scanf("%d", sayilar + i);
        toplam += *(sayilar + i);
    }
   
    sayilar = (int *)realloc(sayilar, 10 * sizeof(int));

    for(int i = 2; i <= 10; i++)  
    {
        *(sayilar + i) = toplam;       
        toplam += *(sayilar + i);
        
        for(int j = 0; j < i; j++)
        {
            printf("%d ", *(sayilar + j));
        }
        printf("\n");
    }

    free(sayilar);
    return (EXIT_SUCCESS);
}

