#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    unsigned char a = 224, b = 0, c = 31;
    unsigned char andSonuc1 = a & b, andSonuc2 = a & c;
    unsigned char orSonuc1 = a | b, orSonuc2 = a | c;
    unsigned char xorSonuc1 = a ^ b, xorSonuc2 = a ^ c;
    unsigned char negA = ~a , negB = ~b , negC = ~c;
   
    printf("%d\n", andSonuc1);
    printf("%d\n", andSonuc2);
    printf("%d\n", orSonuc1);
    printf("%d\n", orSonuc2);
    printf("%d\n", xorSonuc1);
    printf("%d\n", xorSonuc2);
    printf("%d\n", negA);
    printf("%d\n", negB); 
    printf("%d\n", negC);
    return 0;
}

