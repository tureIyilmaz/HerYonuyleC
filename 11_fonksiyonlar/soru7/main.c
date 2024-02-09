

#include <stdio.h>
#include <stdlib.h>

int asalSayiMi(int);

int main(int argc, char** argv) {
    
    int sayi;
    
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    
    if(asalSayiMi(sayi) == 1){
        
        printf("%d asal sayidir.\n",sayi);      
    }
    else {
        printf("%d asal sayi degildir.\n",sayi);
    }

}

int asalSayiMi(int sayi){

    for(int i=2; i < sayi; i++){
        if(sayi % i == 0){
            return 0;
        }       
    }
    return 1;
}

