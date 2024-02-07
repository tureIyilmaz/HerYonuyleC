#include <stdio.h>
#include <stdlib.h>

int main() {
    int number1, number2;
    unsigned char islem;
    
    while(1) {
        printf("Birinci sayiyi giriniz: ");
        scanf("%d", &number1);

        printf("Ikinci sayiyi giriniz: ");
        scanf("%d", &number2);

        printf("Yapilacak islemi seciniz (+, -, *, /, %%): ");

        scanf(" %c", &islem);

        if (islem == '+') {
            printf("%d + %d = %d\n", number1, number2, number1 + number2);
        }
        else if(islem == '-') {
            printf("%d - %d = %d\n", number1, number2, number1 - number2);
        }
        else if(islem == '*') {
            printf("%d * %d = %d\n", number1, number2, number1 * number2);
        }
        else if(islem == '/') {
            printf("%d / %d = %.2f\n", number1, number2, ((float)number1 / (float)number2));
        }
        else if(islem == '%') {
            printf("%d %% %d = %d\n", number1, number2, number1 % number2);
        }
        else{
            printf("Gecersiz deger");
        }
    }
    
    return 0;
}
