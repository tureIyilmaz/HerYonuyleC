#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(int argc, char** argv) {

    int array[SIZE] = {0, 3, 5, 2, 4, 1, 8, 9, 7, 6};
    int gecici = 0;
    
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(array[j] < array[j + 1]) {
                gecici = array[j];
                array[j] = array[j + 1];
                array[j + 1] = gecici;
            }
        }       
    }  
    
   for(int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    } 
        
    return (EXIT_SUCCESS);
}

