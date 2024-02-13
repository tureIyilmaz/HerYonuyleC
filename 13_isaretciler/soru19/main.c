
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    char *ptr1, *ptr2;
    char karakterDizisi[] = "karaman";
    for(ptr1 = karakterDizisi;(*ptr1) != '\0';*ptr1++)
    {
        for(ptr2 = ptr1; (*ptr2) != '\0'; *ptr2++)
        {
            if(*ptr1 == *ptr2)
            {
                puts(ptr2);
            }
        }
    }
    return 0;
}

