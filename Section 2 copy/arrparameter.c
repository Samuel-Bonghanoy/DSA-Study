#include <stdio.h>
#include <stdlib.h>

int * fun(int n)
{
    int *p;
    p = (int *)malloc(n*sizeof(int));
    return p;
}

int main()
{
    int *A;

    A = fun(5);

    A[0] = 1;
    A[1] = 1;
    A[2] = 1; 
    A[3] = 1;
    printf("%d", A[1]);
    
    return 0;
}