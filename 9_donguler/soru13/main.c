#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    
    printf("Enter the number to print the pattern: ");
    scanf("%d", &number);
    
     for(int i = number; i>0 ; i--){
        for(int j = i; j>0; j--){
            if(i%2==0){
                break;
            }                    
            printf("*");
        }
        if(i%2==1){
          printf("\n");  
        }       
    }  
    return 0;
}

