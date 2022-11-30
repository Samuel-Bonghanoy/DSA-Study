#include <stdio.h>

int * fun(int n) //can also do int * to point to both integer and array
{
    int *p;
    p =(int *) malloc(n*sizeof(int));

    return p;
}

int main(void)
{
    int *A;

    A = fun(5); //A will have access the the memory in heap indirectly which was made for the array of 5 ints

    return 0;
}