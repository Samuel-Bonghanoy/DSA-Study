#include <stdio.h>

struct Rectangle
{
    int length;
    int width;
    char x; // this will have 4 bytes allocated for it but it only takes up 1 byte| it takes the nearest bigger size
    //this is called padding. It takes the nearest bigger size so that it is easy for the processor to read the entire structure
}; //you can declare here as well with r1,r2,r3;

//You can declare a variable of struct outside of main function
//struct Rectangle r1, r2, r3;

int main()
{
    struct Rectangle r1 = {10, 5};

    r1.length = 15;
    r1.width = 12;
    
    printf("%d", sizeof(r1));
    return 0;
}