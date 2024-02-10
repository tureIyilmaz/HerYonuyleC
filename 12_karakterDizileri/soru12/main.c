#include <stdio.h>
#include <string.h>

int isAnagramIgnoreCase(char[],char[]);

int main(int argc, char** argv) {
    
    char kelime1[20], kelime2[20];
    
    puts("Anagram olup olmadigini ogrenmek istediginiz 2 kelime giriniz\n");
    puts("1. kelime");
    gets(kelime1);
    puts("2. kelime");
    gets(kelime2);
    
    if(isAnagramIgnoreCase(kelime1,kelime2) == 1)
    {
        printf("ANAGRAM\n");
    }
    else
    {
        printf("DEGIL\n");
    }
    
    return 0;
}

int isAnagramIgnoreCase(char dizi1[], char dizi2[])
{
    int sayac = 0;
    dizi1 = strlwr(dizi1);
    dizi2 = strlwr(dizi2);
    if( strlen(dizi1) == strlen(dizi2))
    {
        for(int i = 0; i < strlen(dizi1); i++)
        {
            for(int j = 0; j < strlen(dizi1) ; j++)
            {
                
                if(dizi2[j] == dizi1[i])
                {
                    sayac++;
                }
                if(dizi1[j] == dizi2[i])
                {
                    sayac++;
                }
            }
            if(sayac < 2)
            {
                return 0;
            }
            sayac = 0;
        }
        return 1;

       
    }
    else 
    {
        return 0;
    }
}