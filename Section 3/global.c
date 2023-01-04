#include <stdio.h>
int x = 0;


int fun(int n)
{
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

//does the same as static2