#include <stdio.h>
#include <stdlib.h>

#define BOYUT 5

void push(int i);
int pop(void);
void yazdir();
void menuGoster();
int get();
int search(int arg);
void dosyayaYaz();
void dosyadanOku();

int *enUst;
int *yigin;
int boyut = BOYUT;
char* dosyaAdi = "yigin.txt";
FILE* dosya;

int main(int argc, char** argv) {
    
    yigin = (int*)malloc(sizeof(int) * boyut);
    int secim;
    enUst = yigin;
    
    while(1){
        menuGoster();
        printf("Bir deger giriniz: ");
        scanf("%d", &secim);
        int deger;
        int sayi = 0;
        
        switch(secim) {
            case 0:
                printf("Sistemden cikiliyor!\n");
                free(yigin); 
                exit(EXIT_SUCCESS);
                break;
            case 1:
                printf("\nYigina eklenecek degeri giriniz: ");
                scanf("%d", &deger);
                push(deger);
                break;
            case 2:
                deger = pop();
                printf("\nYigindan alinan deger: %d\n", deger);
                break;
            case 3:
                yazdir();
                break;
            case 4:
                deger = get();
                printf("\nEn ustteki deger: %d\n", deger);
                break;
            case 5:               
                printf("Yiginin icinde deger var mi:");
                scanf("%d", &sayi);
                deger = search(sayi);
                printf("\n%d degeri yiginda %d tane var\n",sayi ,deger);
                break;
            case 6:
                printf("Yiginin yeni boyutunu giriniz:");
                scanf("%d", &boyut);
                if (boyut <= 0) {
                    printf("Gecersiz boyut!\n");
                    break;
                }
                int* yeni_yigin = (int*)realloc(yigin, boyut * sizeof(int));
                if (yeni_yigin == NULL) {
                    printf("Yetersiz bellek! Boyut degisikligi yapilamadi.\n");
                } else {
                    enUst = yeni_yigin + (enUst - yigin);
                    yigin = yeni_yigin; 
                }
                break; 
            case 7:
                enUst = yigin;
                printf("Yigin bosaltildi.\n");
                break;
            case 8:
                dosyayaYaz();
                break;
            case 9:
                dosyadanOku();
                break;
            default:
                printf("Gecersiz secim. Lutfen gecerli bir sayi giriniz!\n");
                break;
        }
    }
    return 0;
}


void push(int i) {
    if (enUst - yigin == boyut) {
        printf("Yigin dolu. Yeni eleman ekleyemezsiniz!\n");
        return;
    }
    *enUst = i;
    enUst++;
}

int pop(void) {
    if (enUst == yigin) {
        printf("Yigin bos. Eleman cikarmalisiniz!\n");
        return -1; // Hata durumunda -1 döndür
    }
    enUst--;
    int deger = *enUst ;
    return deger ;
}

void yazdir() {
    printf("\n[EnAlt]");
    int* temp = yigin;
    while (temp < enUst){
        printf("%d\n", *temp);
        temp++;
    }
    printf("[EnUst]\n");
}

void menuGoster() {
    printf("\n----------\n        [Menu]        \n----------\n");
    printf("1. Ekle (Push) - 2. Cikar (Pop) - 3. Yazdir - 4. Ust Deger -5. Kac Tane - 6. Yigini Genislet\n"
            "7. Yigini Bosalt - 8. Icerigi Dosyaya Yazdir - 9. Icerigi Dosyadan Oku -0. Cikis\n");
}

int get() {
    if (enUst == yigin) {
        printf("Yigin bos. Ust deger yok!\n");
        exit(EXIT_FAILURE);
    }
    return *(enUst - 1);
}

int search(int arg){
    int sayac = 0;
    int* temp = yigin;
    while (temp < enUst){
        if(*temp == arg){
            sayac++;
        }
        temp++;
    }
    return sayac;
}

void dosyayaYaz() {
    dosya = fopen(dosyaAdi, "w+");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return;
    }
    for (int i = 0; i < (enUst - yigin); i++) {
        fprintf(dosya, "%d ", yigin[i]);
    }
    fclose(dosya); 
    printf("Yigin icerigi dosyaya yazildi.\n");
}

void dosyadanOku() {
    dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return;
    }
    enUst = yigin; 
    while (fscanf(dosya, "%d", enUst) == 1) {
        enUst++;
    }
    fclose(dosya);
    printf("Yigin icerigi dosyadan okundu.\n");
}
