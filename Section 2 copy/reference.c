#include <stdio.h>

int main()
{
    int r = 0;
    int a = 10;
    int r = a; //with an apersand it is a reference. It means there is 2 names for that same value, a and r
    printf("%d", a);
    r++;
    printf("%d", a);
}