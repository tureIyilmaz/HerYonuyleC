#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char ch;
    
    printf("Enter the first letter of one of the big four Turkish football teams:\n");
    scanf("%c", &ch);
    
    switch (ch) {
        case 'b':
        case 'B':
            printf("BESIKTAS");
            break;
        case 'f':
        case 'F':
            printf("FENERBAHCE");
            break;
        case 'g':
        case 'G':
            printf("GALATASARAY");
            break;
        case 't':
        case 'T':
            printf("TRABZONSPOR");
            break;
        default:
            printf("INVALID CHARACTER");
            break;
    }

    return 0;
}
