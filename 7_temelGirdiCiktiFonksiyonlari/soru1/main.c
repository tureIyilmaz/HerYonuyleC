

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int sayi1,sayi2, buyuk;
    printf("Lutfen iki adet sayi giriniz:");
    scanf("%d %d", &sayi1, &sayi2);
    
    printf("Girdiginiz \"birinci\" sayi = %d\n", sayi1);
    printf("Girdiginiz \"ikinci\" sayi = %d\n", sayi2);
    
    buyuk = sayi1 >= sayi2 ? sayi1 : sayi2;
    sayi2 = sayi1 < sayi2 ? sayi1 : sayi2;
    

    printf("%d %% %d = %d\n", buyuk, sayi2 ,buyuk%sayi2);
    
    
    return 0;
}

