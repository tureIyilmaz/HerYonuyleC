#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(int argc, char** argv) {
    int numbers[SIZE] = {25, 22, 17, 19, 47, 3, 98, 5, 124, 10};
    int input, largest = 0, found = 0;
    
    printf("Enter the value of n to find the nth smallest number: ");
    scanf("%d", &input);
        
    // Find the largest number in the array
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    
    // Search for the nth smallest number
    for (int i = 0; i < largest; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(numbers[j] == i){
                found++;
                
                if(found == input) {
                    printf("The %dth smallest number is: %d\n", input, i);
                    return 0;
                }
            }
        }
    }
   
    return 0;
}
