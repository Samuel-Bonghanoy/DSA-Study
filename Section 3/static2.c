#include <stdio.h>

int fun(int n)
{
    static int x = 0; //only a single copy of this variable will be created and edited each time for this recursion
    if(n > 0)
    {
        x++;
        return fun(n-1) +x; //since + x is only called in the returning time it already becomes 5 added each time
    }
    return 0;
}

int main(void) 
{
    int r;
    r = fun(5);
    printf("%d", r);
    return 0;
}