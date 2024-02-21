#include <stdio.h>
#include <stdlib.h>


typedef struct eleman{
    int deger;
    struct eleman *sonraki;
}Eleman;

typedef struct liste{
    Eleman* baslangic;
    int elemanSayisi;
}Liste;

void menuGoster();
void hazirla(Liste* liste);
void ekle(Liste* liste, int deger);
void cikar(Liste* liste, int sira);
void maks(Liste*);
void min(Liste*);
void arayaEkle(Liste *liste, int eleman, int sira);
void sirala(Liste *liste);
void fazlaVarsaCikar(Liste *liste, int deger);
void yazdir(Liste* liste);
void temizle(Liste* liste);

int main() {

    Liste liste;
    hazirla(&liste);
    int secim, sira, deger;
    
    while(1) {
        menuGoster();
        scanf("%d", &secim);
        
        switch(secim){
            case 0:
                temizle(&liste);
                printf("Sistemden cikiliyor.");
                exit(EXIT_SUCCESS);
                break;
            case 1:
                yazdir(&liste);
                break;
            case 2:
                scanf("%d", &deger);
                ekle(&liste, deger);
                break;
            case 3:
                printf("\nListedeki eleman sayisi: %d", liste.elemanSayisi);
                printf("\nKacinci eleman listeden cikariliyor:");
                scanf("%d", &sira);
                cikar(&liste, sira);
                break;
            case 4:
                maks(&liste);
                break;
            case 5:
                min(&liste);
                break;
            case 6:
                printf("\nKacinci siraya eleman eklemek istiyorsunuz:");
                scanf("%d", &sira);
                printf("Eklemek istediginiz elemani giriniz:");
                scanf("%d", &deger);
                arayaEkle(&liste, deger, sira);
                break;
                case 7:
                    sirala(&liste);
                    break;
                case 8:
                    printf("Silmek istediginiz degeri giriniz:");
                    scanf("%d", &deger);
                    fazlaVarsaCikar(&liste, deger);
                    break;
            default:
                printf("Gecersiz islem.");
                break;
        }
    }
    return EXIT_SUCCESS;
}

void hazirla(Liste* liste){
    liste->baslangic = (Eleman*)malloc(sizeof(Eleman));
    liste->baslangic->sonraki = NULL;
    liste->elemanSayisi = 0;
}

void ekle(Liste* liste, int deger){
    Eleman* yeniEleman = (Eleman*)malloc(sizeof(Eleman));
    yeniEleman->deger = deger;
    
    if(liste->elemanSayisi == 0){
        liste->baslangic->sonraki = yeniEleman;
    }
    else {
        Eleman *ptr = liste->baslangic;
        int i = 0;
        while(i < liste->elemanSayisi){
            ptr = ptr->sonraki;
            i++;
        }
        ptr->sonraki = yeniEleman;
    }
    yeniEleman->sonraki = NULL;
    liste->elemanSayisi++;
}

void cikar(Liste* liste, int sira){
    if(sira < 1 ||sira > liste->elemanSayisi){
        printf("\nGecersiz Deger!");
        return;
    }
    liste->elemanSayisi--;
    
    if(liste->elemanSayisi == 1){
        free(liste->baslangic->sonraki);
        liste->baslangic->sonraki = NULL;
        return;
    }
    
    Eleman* ptr = liste->baslangic;
    int i = 0;
    while(i < sira - 1){
        ptr = ptr->sonraki;
        i++;
    }
    Eleman* temp = ptr->sonraki;
    ptr->sonraki = ptr->sonraki->sonraki;
    free(temp);
}


void maks(Liste* liste) {
    if(liste->elemanSayisi == 0){
        printf("Liste bos.\n"); 
    }
    else {
        int max = liste->baslangic->sonraki->deger;
        Eleman *ptr = liste->baslangic->sonraki;
        while(ptr != NULL){
            if(ptr->deger > max){
                max = ptr->deger;
            }
            ptr = ptr->sonraki;
        }
        printf("Maksimum deger:%d\n", max); 
    }
}


void min(Liste* liste) {
    if(liste->elemanSayisi == 0){
        printf("Liste bos.\n"); 
    }
    else {
        int min = liste->baslangic->deger;
        Eleman *ptr = liste->baslangic->sonraki;
        
        while(ptr != NULL){
            if(ptr->deger < min){
                min = ptr->deger;
            }
            ptr = ptr->sonraki;
        }
        printf("Minimum deger:%d\n",min); 
    }
}

void arayaEkle(Liste *liste, int eleman, int sira) {
    if(sira < 1 || sira > liste->elemanSayisi + 1) {
        printf("Gecersiz sira!\n");
        return;
    }
    
    Eleman *yeniEleman = (Eleman*)malloc(sizeof(Eleman));
    if(yeniEleman == NULL) {
        printf("Bellek tahsis edilemedi!\n");
        return;
    }
    yeniEleman->deger = eleman;
    
    Eleman *ptr = liste->baslangic;
    int i = 0;
    while(i < sira - 1) {
        ptr = ptr->sonraki;
        i++;
    }
    
    yeniEleman->sonraki = ptr->sonraki;
    ptr->sonraki = yeniEleman;
    
    liste->elemanSayisi++;
    
    printf("%d elemani %d. siraya eklendi.\n", eleman, sira);
}

void sirala(Liste *liste){
    
    if(liste->elemanSayisi <= 1) {
        return;
    }  
    Eleman *ptr = liste->baslangic->deger;
    int temp;
    while(ptr != NULL){
        if(ptr->sonraki->deger < ptr->deger){
            temp = ptr->sonraki->deger;
            ptr->sonraki->deger = ptr->deger;
            ptr->deger = temp;
        }
        ptr = ptr->sonraki;
    }
}
void temizle(Liste* liste) {
    Eleman *ptr = liste->baslangic;
    Eleman *temizlenecek;
    
    printf("\nListe temizleniyor");
    while(ptr->sonraki != NULL){
        temizlenecek = ptr;
        ptr = ptr->sonraki;
        free(temizlenecek);
    }
    free(ptr);
}

void fazlaVarsaCikar(Liste *liste, int deger) {
    Eleman *current = liste->baslangic->sonraki;
    Eleman *prev = liste->baslangic;

    while (current != NULL) {
        if (current->deger == deger) {
            Eleman *temp = current;
            prev->sonraki = current->sonraki;
            current = current->sonraki;
            free(temp);
            liste->elemanSayisi--;
        } else {
            prev = current;
            current = current->sonraki;
        }
    }
}


void yazdir(Liste *liste) {
    printf("\nListedeki eleman sayisi:%d\n",liste->elemanSayisi);
    Eleman *ptr = liste->baslangic;
    int i = 1;
    while(ptr->sonraki != NULL) {
        printf("%2d. eleman:%d\n",i ,ptr->sonraki->deger);
        ptr = ptr->sonraki;
        i++;
    }
}

void menuGoster(){
    printf("\n-----------\n   [MENU]       \n-----------\n" );
    printf("1. Listeyi Yazdir\n");
    printf("2. Listeye Eleman Ekle\n");
    printf("3. Listeden Eleman Cikar\n");
    printf("4. Listenin Maksimim Degeri\n");
    printf("5. Listeden Minimum Degeri\n");
    printf("6. Araya Deger Ekle\n");
    printf("7. Listeyi Kucukten Buyuge Sirala\n");
    printf("8. Fazla Varsa Cikar\n");
    printf("0. Cikis\n");
    printf("Seciminizi giriniz:");
}



