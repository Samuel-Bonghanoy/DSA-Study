#include <stdio.h>

void patternPrintUpper(int a)
{
    static int x = 0;
    if(x < a)
    {
        // printf("%d", x);
        for(int i = 0; i <= x; i++)
        {
            printf("*");
        }
        x++;
        printf("\n");
        patternPrintUpper(a);
    }
}

void patternPrintLower(int a)
{
    static int x = 5;

    if(x <= a && x > 0)
    {
        x--;
        for(int i = 0; i <= x; i++)
        {
            printf("*");
        }
        printf("\n");
        patternPrintLower(a);
    }
}

int main(void)
{
    int a = 5;
    if(a > 0)
    {
        patternPrintUpper(a);
        patternPrintLower(a);
    }
    return 0;
}