#include <stdio.h>

int fun(int n)
{
    
    if(n > 0)
    {
        return fun(n-1) +n; //n will have its own unique value in each call 
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