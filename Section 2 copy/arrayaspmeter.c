/*
ARRAYS CANNOT BE PASSED BY VALUE AT ALL. ARE ALWAYS PASSED BY ADDRESS
WHEN IT IS GIVEN AS AN ARGUMENT TO A FUNCTION IT IS GIVEN AS A POINTER

void fun(int A[], int n){}

or

void fun(int*A, int n){}

the difference is the pointer can point to both an integer and even an array while brackets are poitners to array only

inside the function you can make changes to the array and it will reflect in the actual parameter array. 
*/
#include <stdio.h>
#include <stdlib.h>

int * array_set(int n) //can also do int * to point to both integer and array
{
    int *p;
    p = (int *) malloc(n*sizeof(int));

    return p;
}

void PrintArray(int *A)
{   

    for(int i=0; i <=3; i++){
        A[i] = 1;
    }
    A[0] = 15;  
    for(int i=0; i <=4; i++){
        printf("%d\n", A[i]);
    }
}


int main(void)
{
    int *A;

    A = array_set(5); //A will have access the the memory in heap indirectly which was made for the array of 5 ints
    printf("%d\n", sizeof(A));
    PrintArray(A);


    return 0;
}