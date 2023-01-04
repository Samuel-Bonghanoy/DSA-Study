#include <stdio.h>

void patternPrintUpper(int a)
{
    static int x = 0;
    if(x < a)
    {   
        x++;
        // printf("%d", x);
        for(int i = 0; i < x; i++)
        {
            printf("*");
        }
        printf("\n");
        patternPrintUpper(a);
    }
}

void patternPrintLower(int a)
{
    if(a >= 0)
    {
        for(int i = 0; i < a; i++)
        {
            printf("*");
        }
        printf("\n");
        patternPrintLower(a - 1);
    }
}

int main(void)
{
    int a = 5;

    patternPrintUpper(a);
    patternPrintLower(a);
    
    return 0;
}