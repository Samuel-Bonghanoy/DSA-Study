#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

//CALLING BY VALUE
void fun(struct Rectangle r1)
{
    r1.length = 20;
    printf("Length %d\nBreadth %d\n\n", r1.length, r1.breadth);
}

//CALLING BY ADDRESS
void fun_ref(struct Rectangle *p)
{
    p->length = 36;
    p->breadth = 69;
    printf("Length %d\nBreadth %d\n\n", p->length, p->breadth);
}
//returning address of struct
struct Rectangle * rec_fun()
{
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length = 15;
    p->breadth = 7;

    return p;
}

int main(void)
{
    struct Rectangle r={10,5};
    struct Rectangle *ptr = rec_fun();

    printf("Length %d \nBreadth %d\n\n", r.length,r.breadth);
    fun(r);
    fun_ref(&r);
    fun(r);
    printf("Length %d \nBreadth %d\n\n", r.length,r.breadth);
    fun(r);

    printf("HEAP STRUCTURE: LENGTH %d BREADTH %d", ptr->length, ptr->breadth);
    return 0;
}