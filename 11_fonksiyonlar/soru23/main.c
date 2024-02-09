#include <stdio.h>
#include <stdlib.h>

int  Fiboniacci(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci(%d) = %d\n", n, Fiboniacci(n));
    
    return 0;
}

int  Fiboniacci(int n){
    
    if (n == 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;
    else
        return Fiboniacci(n - 1) + Fiboniacci(n - 2);
}

