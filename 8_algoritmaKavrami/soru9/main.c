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
    
        switch(islem) {
            case '+':
                printf("%d + %d = %d\n", number1, number2, number1 + number2);
                break;
            case '-':
                printf("%d - %d = %d\n", number1, number2, number1 - number2);
                break;
            case '*':
                printf("%d * %d = %d\n", number1, number2, number1 * number2);
                break;
            case  '/':
                printf("%d / %d = %.2f\n", number1, number2, ((float)number1 / (float)number2));
                break;
            case '%':
                printf("%d %% %d = %d\n", number1, number2, number1 % number2);
                break;
            default:
                printf("Gecersiz deger");
                break;
        }
    }
    

    
    return 0;
}
