// Ana amacı boyut taşmasını önlemek

#include <stdio.h>

int main() {
    char name[20];
    int age;

    printf("Enter your name: ");
    scanf_s("%19s", name, sizeof(name)); // %19s ile sınırlı uzunluk belirtiliyor
    // Bu, taşmaları önlemek için dizinin boyutunu 1 azaltır ve dizinin sonunu null karakterle doldurur

    printf("Enter your age: ");
    scanf_s("%d", &age);

    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}
