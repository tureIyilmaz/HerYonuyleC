CC = gcc

soru16-18: main.o karakter_islemleri.o
$(CC) main.o karakter_islemleri.o -o soru16-18.exe

main.o: main.c
$(CC) -c main.c

karakter_islemleri.o: karakter_islemleri.c karakter_islemleri.h
$(CC) -c karakter_islemleri.c

clean:
rm -rf *.o