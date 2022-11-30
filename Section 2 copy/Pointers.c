/*
    A pointer is an address variable meant for storing the address of data not data itself. POinters are used for indirectly accessing data

    Main memory is divided into 3 sections: code, stack, heap. Program only accesses stack and code. does not directly access heap.

    Pointers are what is used to access heap memory. With a pointer, anything can be put into the heap. Useful for accessing things outside the program

    Pointers can also be used to directly access hard disk files that are external. Programs cannot directly access hard disk files because they are
    outside the program. For that it needs a pointer. the pointer should be a file type to access that. Anything external can only be accessed through pointers.
    it can access internet, monitor, keyboard through the help of pointers.


    uses of a pointer:
    1. accessing heap memory
    2. external resources
    3. parameter passing

    normally declared variables occupy the memory in the stack frame of a main function in the stack

    a pointer storing the adress of a variable will also take up memory in the stack

    in declaration of a pointer you must use a *, for initialization there is no need, but in dereferencing you need a * unless you are printing or referencing the adress

    TO ACCESS HEAP MEMORY:

    WHENEVER YOU DECLARE SOMETHING, THAT WILL DEFINITELY BE INSIDE STACK. ALL VARIABLES. 

    STDLIB.H IS THE LIBRARY FOR MEMORY ALLOCATION

    MALLOC IS THE WAY TO CREATE SOMETHING USING THE MEMORY IN HEAP

    MALLOC FUNTION RETURNS A VOID POINTER

    YOU NEED TO TYPECAST IT SO THAT IT WILL BE THE DATA TYPE THAT YOU WANT
    ex.
    p = (int*) malloc(5*sizeof(int));

    the pointer is the only way we can access that array
 */


#include <stdio.h>

int main(void)
{
    int a = 10;
    printf("%d\n", a);

    int *p; //declaration of a pointer
    p = &a; //initialization of a pointer to a memory address of variable a

    printf("%d using pointer\n", *p); //Printing a dereference 
    printf("%d %d using pointer variable and address of a\n", p, &a);

    //Pointer to an array
    int b[5]={1,2,3,4,5}; //This array is created inside the stack
    int *point;
    point = b; // dont need to use ampersand when giving name to an array pointer
           //could also use p = &A[0]

    for(int i = 0; i < 5; i++){
        printf("%d\n", point[i]);
    }
    return 0;
}