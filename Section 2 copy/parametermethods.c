/*
PASSING BY VALUE
IN PASSING BY VALUE ANY CHANGES TO FORMAL PARAMETERS WILL NOT BE REFLECTED IN THE ARGUMENTS / ACTUAL PARAMETERS
EX. IN VOID SWAP FUNCTION
USE PASS BY VALUE WHEN YOU DONT NEED TO MODIFY THE ACTUAL PARAMETERS. this is not suitable for swapping values actually.
USE IT WHEN YOU WANT TO SIMPLY CALL A FUNCTION AND RETURN A RESULT

CALL BY ADDRESS
addresses of actual parameters are passed to formal parameters and formal parameters must be pointers. Changes here will modify actual parameters.

for actual parameters the syntax is swap(&a, &b)
and for formal parameters the syntax is void swap(int *x, int *y)
within the function x and y must be dereferenced every time in order to access the value
through this the function can access the variables of another function and modify them

CALL BY REFERENCE
NOT A PART OF C LANGUAGE

void swap(&x, &y)
*/

#include <stdio.h>

int add(int a, int b)
{
    a++;

    return a;
}

int main(void)
{
    int num1 = 10, num2 = 15, sum;

    sum = add(num1, num2);
    return 0;
}