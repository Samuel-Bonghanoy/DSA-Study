#include <stdio.h>

void fun(int n)
{
    if(n > 0)
    {
    fun(n - 1);
    printf("%d", n);
    }
}

int main(void)
{
    fun(3);
    return 0;
}