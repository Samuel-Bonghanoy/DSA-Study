#include <stdio.h>

void funA(int n) 
{
    if(n > 0)
    {
        printf("%d", n);
        funB(n - 1);
    }
}

void funB(int n) 
{
    if(n > 1)
    {
        printf("%d", n);
        funA(n / 2);
    }
}

int main(void)
{
    int x = 5;
    funA(5);
    return 0;
}