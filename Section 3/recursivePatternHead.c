#include <stdio.h>

void patternPrintUpper(int a)
{
    if(a > 0)
    {
        patternPrintUpper(a - 1);
       
        for(int i = 0; i < a; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void patternPrintLower(int a)
{
    int x = a;
    if(a > 0)
    {
        patternPrintLower(a - 1);
        int ctr = 0;
        while(x < 5)
        {
            x++;
            ctr++;
        }

        for(int i = 0; i <= ctr; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(void)
{
    int a = 5;
    
    patternPrintUpper(a);
    patternPrintLower(a);
    
    return 0;
}