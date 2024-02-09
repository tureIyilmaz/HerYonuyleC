

#include <stdio.h>
#include <stdlib.h>

void Treboniacci(int N);

int main() {
    Treboniacci(8);
    return 0;
}

void Treboniacci(int N){
    
    int dizi[N];
    dizi[0] = 1;
    dizi[1] = 1;
    dizi[2] = 1;
    
    for(int i = 3; i < N; i++) {
        dizi[i] = dizi[i - 1] + dizi[i - 2] + dizi[i - 3];
    }
    printf("%d", dizi[N - 1]);
}

