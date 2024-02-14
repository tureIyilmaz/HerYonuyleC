#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int *sayilar = (int *)malloc(2 * sizeof(int));
    
    for(int i = 0; i < 2; i++){
        printf("%d. sayiyi gir:", i + 1);
        scanf("%d", sayilar + i);
    }
    printf("Kullanicinin girdigi sayilar:");
    for(int i = 0; i < 2; i++){
        printf("%d, ",*(sayilar + i));
    }
    
    sayilar = (int *)realloc(sayilar, 3 * sizeof(int));
    
    
    printf("\nBellek alanindaki sayi degerleri:");
    
    *(sayilar + 2) = *(sayilar) + *(sayilar + 1);
    
    for(int i = 0; i < 3; i++){
        
        printf("%d, ",*(sayilar + i));
    }
    free(sayilar);
    return (EXIT_SUCCESS);
}

