#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int minimumInteger(int value1, int value2);
int maximumInteger(int value1, int value2);
double minimumDouble(double value1, double value2);
double maximumDouble(double value1, double value2);

// Global variables
int integerNumber1 = 0, integerNumber2 = 0;
double doubleNumber1 = 0, doubleNumber2 = 0;

int main() {
    printf("Enter two integer numbers: ");
    scanf("%d %d", &integerNumber1, &integerNumber2);
    
    printf("Enter two double numbers: ");
    scanf("%lf %lf", &doubleNumber1, &doubleNumber2);
    
    printf("Minimum of integer numbers: %d\n", minimumInteger(integerNumber1, integerNumber2));
    printf("Maximum of integer numbers: %d\n", maximumInteger(integerNumber1, integerNumber2));
    printf("Minimum of double numbers: %f\n", minimumDouble(doubleNumber1, doubleNumber2));
    printf("Maximum of double numbers: %f\n", maximumDouble(doubleNumber1, doubleNumber2));
    
    return 0;   
}

int minimumInteger(int value1, int value2) {   
    return (value1 <= value2 ? value1 : value2);
}

int maximumInteger(int value1, int value2) {   
    return (value1 >= value2 ? value1 : value2);
}

double minimumDouble(double value1, double value2) {
    return (value1 <= value2 ? value1 : value2);
}

double maximumDouble(double value1, double value2) {
    return (value1 >= value2 ? value1 : value2); 
}
