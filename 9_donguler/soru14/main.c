#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    
    printf("Enter the number to print the pattern: ");
    scanf("%d", &number);
    
    for(int i = number; i>0 ; i--){
            if(i%2==0){
                continue;
            }
            for(int j = i; j>0; j--){                    
                printf("*");
            }
            printf("\n");
    }
    return 0;
}



