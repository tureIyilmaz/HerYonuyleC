#include <stdio.h>
#include <stdlib.h>

#define BOYUT 50

void push(int i);
int pop(void);
void yazdir();
void menuGoster();
int get();


int *enAlt, *enUst;
int yigin[BOYUT];

int main(int argc, char** argv) {
    int secim;
    enAlt = yigin;
    enUst = yigin;
    
    while(1){
        menuGoster();
        printf("Bir deger giriniz: ");
        scanf("%d", &secim);
        int deger;
        int usttekiDeger;
        switch(secim) {
            case 0:
                printf("Sistemden cikiliyor!\n");
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
                usttekiDeger = get();
                printf("\nEn ustteki deger: %d\n", usttekiDeger);
                break;
            default:
                printf("Gecersiz secim. Lutfen gecerli bir sayi giriniz!\n");
                break;
        }
    }
    return 0;
}

void push(int i) {
    if (enUst - enAlt == BOYUT) {
        printf("Yigin dolu. Yeni eleman ekleyemezsiniz!\n");
        exit(EXIT_FAILURE);
    }
    *enUst = i;
    enUst++;
}

int pop(void) {
    if (enUst == enAlt) {
        printf("Yigin bos. Eleman cikarmalisiniz!\n");
        exit(EXIT_FAILURE);
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
    printf("1. Ekle (Push) - 2. Cikar (Pop) - 3. Yazdir - 4.Ust Deger - 0. Cikis\n");
}

int get() {
    if (enUst == enAlt) {
        printf("Yigin bos. Ust deger yok!\n");
        exit(EXIT_FAILURE);
    }
    return *(enUst - 1);
}