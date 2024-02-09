#include <stdio.h>
#include <stdlib.h>

int  Treboniacci(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Treboniacci(%d) = %d\n", n, Treboniacci(n));
    
    return 0;
}

int  Treboniacci(int n){
    
    if (n == 0)
        return 1;
    else if (n == 1 || n == 2 || n == 3)
        return 1;
    else
        return Treboniacci(n - 1) + Treboniacci(n - 2) + Treboniacci(n - 3);
}

