#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main(void)
{
    int num1 = 10, num2 = 15;

    printf("%d %d\n", num1, num2);

    swap(&num1, &num2);

    printf("%d %d\n", num1, num2);


    return 0;
}