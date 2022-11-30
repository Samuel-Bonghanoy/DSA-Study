#include <stdio.h>

int main()
{
    int a[5];
    a[0] = 12;
    a[1] = 15;
    a[2] = 13;
    //variable size arrays cannot be initialized

    int b[] = {3,6,9,12,15};
    int c[10] = {2,4,6,8,10};
    int d[] = {0}; //initializing an entire array as 0

    printf("%d\n", sizeof(a));
    printf("%d\n", a[0]);
    printf("%d\n", a[2]);

    printf("%d", c[9]); // prints a 0 cuz the space is already set for the array but the value has not been changed
    return 0;
}