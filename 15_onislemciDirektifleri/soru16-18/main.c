#include <stdio.h>
#include <stdlib.h>
#include "karakter_islemleri.h"

int main(int argc, char** argv) {

    char karakterDizisi[50] = "ABC";
    const char* karakterDizisi2 = "ABC";

    if(my_strcmp(karakterDizisi, karakterDizisi2)) {
        printf("Aynidir\n");
    }

    char* concatenatedString = my_strcat(karakterDizisi, karakterDizisi2);
    printf("%s\n", concatenatedString);

    return (EXIT_SUCCESS);
}

