#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
#define INT_MIN -2147483648
#define INT_MAX 214748364

void display(int arr[]);
int *sorting_souls(int arr[]);

int main() {
    int list[MAX_SIZE];

    printf("Enter number of souls: ");
    scanf("%d", &list[0]);

    printf("Enter soul scores: ");
    for(int i = 1; i <= list[0]; ++i) {
        scanf("%d", &list[i]);
    }

    //prints initial soul list
    printf("Initial soul list: ");
    display(list);

    *sorting_souls(list);
    
    //prints sorted soul list
    printf("Sorted soul list: ");
    display(list);
    

    return 0;
}

void display(int arr[]) {
    printf("[");
    for(int i = 1; i <= arr[0]; ++i) {
        printf("%d", arr[i]);
        if(i < arr[0]) {
            printf("|");
        }
    }
    printf("], SOUL COUNT: %d\n", arr[0]);
}

int *sorting_souls(int arr[]) {
    int highest1 = arr[1], highest2 = INT_MIN, i, index2;

    //getting the highest value
    for(i = 2; i <= arr[0]; i++)
    {
        if(arr[i] > highest1)
        {
            highest2 = highest1;
            highest1 = arr[i];
        }
    }

    //getting index for second highest
    for(i = 1; i <= arr[0]; i++)
    {
        if(arr[i] == highest2)
        {
            index2 = arr[i];
            break;
        }
    }

    int count = 0;
    for(i = index2; i <= arr[0]; i++)
    {
        if(i <= arr[0])
        {
            count++;
        }
    }

    arr[0] = count;
    
    for(i = 1; i <= count; i++)
    {
        arr[i] = arr[count - 1 + i];
    }
    
    /*printf("Highest value is %d", highest1);
    printf("Second highest value is %d", highest2);*/
}