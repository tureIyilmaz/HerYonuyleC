
#include <stdio.h>
#include <stdlib.h>

void fn (int[], int[]);

int main( void ) 
{
    int i,qa[]={1, 1, 2, 2}, count[3] = {4, 4, 4};
    fn(qa, count );
    for (i=0;i<3;++i)
        printf("%d\n",count[i]);
    return 0;
}

void fn(int q[], int c[])
{
    int i,j;
    for(i=0;i<4;++i)
        for(j=0;j<3;++j)
            if ( q[i] !=j )
                c[j] -= 1;
}

