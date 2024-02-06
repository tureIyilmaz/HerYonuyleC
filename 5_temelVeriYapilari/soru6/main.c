#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, total = 0;
    int numbers[6] = {4, 8, 15, 16, 23, 21};
    float percentageValues[6], totalPercentage;
     
    // Calculating the total sum of the numbers
    for (i = 0; i < 6; i++) {        
        total += numbers[i];
    }

    // Calculating the percentage value for each number and printing
    for (i = 0; i < 6; i++) {        
         percentageValues[i] = numbers[i] / (float)total * 100.0;
         printf("Percentage value of number %d, which is %d, is %.2f\n", i+1, numbers[i], percentageValues[i]); 
         
         totalPercentage += percentageValues[i];   
    }
    
    // Printing the total percentage
    printf("Total percentage: %.2f", totalPercentage);
    
    return 0;
}
