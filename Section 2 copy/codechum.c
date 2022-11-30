#include <stdio.h>

int main(void)
{
    char ch;
    int a, b, c;
    float result;

    printf("Enter operation: ");
    scanf("%c", &ch);

    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    printf("Enter number 3: ");
    scanf("%d", &c);

    switch(ch){
        case '+':
            result = a + b + c;
            printf("Answer: %.2f", result);
            break;
        case '-':
            result = a - b - c;
            printf("Answer: %.2f", result);
            break;
        case '*':
            result = a * b * c;
            printf("Answer: %.2f", result);
            break;
        case '/':
            result = ((float)a )/((float) b) / ((float)c);
            printf("Answer: %.2f", result);
            break;
        
    }
    
    return 0;
}