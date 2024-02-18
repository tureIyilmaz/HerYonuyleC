
#include <stdio.h>
#include <stdlib.h>

#include "karmasik_sayi_islemleri.h"

int main(int argc, char** argv) {

    KarmasikSayi karmasiksayi1, karmasiksayi2;
    
    karmasiksayi1 = karmasikSayiOlustur();
    karmasiksayi2 = karmasikSayiOlustur();
    
    karmasikTopla(karmasiksayi1, karmasiksayi2);
    
    karmasikCikar(karmasiksayi1, karmasiksayi2);
    
    karmasikCarp(karmasiksayi1, karmasiksayi2);
    
    karmasikBolen(karmasiksayi1, karmasiksayi2);
    
    return (EXIT_SUCCESS);
}

