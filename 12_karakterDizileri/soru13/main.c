#include <stdio.h>
#include <string.h>

void dizininKarakterleri(char[]);

int main(int argc, char** argv) {
    char metin[50];
    printf("Karakterlerini tek tek görmek istedigin metni gir");
    gets(metin);
    dizininKarakterleri(metin);
    return 0;
}

void dizininKarakterleri(char dizi[])
{   
    int i=0;
    char *p = strtok(dizi," ");
    for(i = 0; i < strlen(p);i++)
    {
        printf("%c ", p[i]);
    }
    
    i=0;
    while(p != NULL)
    {
        p = strtok(NULL," ");
        
        while(i < strlen(p))
        {
            printf("%c ", p[i]);
            i++;
        }
        i=0;
    }
}

