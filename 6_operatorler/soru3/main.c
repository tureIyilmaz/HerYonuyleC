#include <stdio.h>

int main(int argc, char** argv) {

    int a=5,b;
  
    b = ++a + a++ * --a;
	
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    
    return 0;
}

