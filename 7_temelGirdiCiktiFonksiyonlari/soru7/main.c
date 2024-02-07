
#include <stdio.h>



int main(int argc, char** argv) {

    char ch;
    int i=0;
    while(ch != 'x') {
        printf("\b\b\b");
        ch = getch();
        i++;
        printf("%d",i);
    }
    printf("\nx karakterine basildigi icin uygulama sonlandirildi");
    return 0;
}

