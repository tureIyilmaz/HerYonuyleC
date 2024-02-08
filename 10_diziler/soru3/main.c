#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, sayilar[5] = {};

    sayilar[5] = 6450;
    
       for(i = 0; i<6 ; i++){
        printf("%d. number = %d\n",i+1,sayilar[i]);            
    }  
    return 0;
}

