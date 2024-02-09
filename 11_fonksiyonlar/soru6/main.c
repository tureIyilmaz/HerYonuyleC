#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Foksiyon protetipi
double cevreHesapla(double yaricap);
double alanHesapla(double yaricap);


int main() {
    
    double yaricap;
    
    printf("Alan ve cevre bilgisi istediginiz dairenin yaricapini giriniz:");
    scanf("%lf", &yaricap);
    printf("Dairenin cevresi: %lf\n", cevreHesapla(yaricap));
    printf("Dairenin alani: %lf\n", alanHesapla(yaricap));
    
    return 0;
}

double cevreHesapla(double yaricap) {
    return 2 * M_PI * yaricap;
}

double alanHesapla(double yaricap) {
    return M_PI * yaricap * yaricap;
}

