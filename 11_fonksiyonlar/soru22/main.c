

#include <stdio.h>
#include <stdlib.h>

void Fiboniacci(int N);

int main() {
    Fiboniacci(8);
    return 0;
}

void Fiboniacci(int N){
    
    int dizi[N];
    dizi[0] = 1;
    dizi[1] = 1;
    for(int i = 2; i < N; i++) {
        dizi[i] = dizi[i - 1] + dizi[i - 2];
    }
    printf("%d", dizi[N - 1]);
}

