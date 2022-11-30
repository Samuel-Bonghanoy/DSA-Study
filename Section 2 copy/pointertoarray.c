#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    struct Rectangle r = {10,5};
    printf("%d\n", r.length);

    struct Rectangle *p = &r;
    printf("%d\n", p->length);

    struct Rectangle *pointer;

    pointer->length = 14;
    pointer->width = 7;

    printf("%d\n", pointer->length);
    printf("%d\n", pointer->width);

    pointer = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    return 0;
}