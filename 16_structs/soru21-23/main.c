#include <stdio.h>
#include <string.h>
#include "film.h"

int main() {
    Film filmListesi[10]; 
    int filmSayisi = 0;

    Film film1 = {"Interstellar", "Christopher Nolan", 2014, GERILIM};
    filmListesi[filmSayisi++] = film1;

    Film film2 = {"Inception", "Christopher Nolan", 2010, GERILIM};
    filmListesi[filmSayisi++] = film2;

    Film film3 = {"The Dark Knight", "Christopher Nolan", 2008, AKSIYON};
    filmListesi[filmSayisi++] = film3;

    Film film4 = {"The Dark Knight Rises", "Christopher Nolan", 2012, AKSIYON};
    filmListesi[filmSayisi++] = film4;

    Film film5 = {"The Godfather", "Francis Ford Coppola", 1972, DRAM};
    filmListesi[filmSayisi++] = film5;

    filmleriGrupla(filmListesi, filmSayisi, YONETMENINE_GORE_GRUPLA);


    return 0;
}
