#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Every pointer takes the same amount of memory regardless of the data type it is pointing to
    //creating an array in heap
    int *p;
    p = (int*)malloc(5*sizeof(int));

    p[0] = 10, p[1] = 15, p[2] =45, p[3] = 123, p[4] = 122;

    for(int i = 0; i < 5; i++){
        printf("%d\n", p[i]);
    }
    
    free(p);
    return 0;
}