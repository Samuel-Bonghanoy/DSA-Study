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

    printf("Initial soul list: ");
    display(list);

    
    printf("Sorted soul list: ");
    int *sortedSouls = sorting_souls(list);
    display(sortedSouls);
    
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
    //initialize max number in array as the value in index 1
    int max = arr[1];

    //traverse array for the biggest number and store it in max
    for(int i = 1; i <= arr[0]; ++i) 
    {
        if(arr[i] > max)
            max = arr[i];
    }

    int second = 0; //store 2nd biggest number here
    int ctr = 0; //store index of 2nd biggest number here
    
    //traverse array to find the 2nd biggest number
    for(int i = 1; i <= arr[0]; ++i) 
    {
        // ignore the highest number
        if(arr[i] == max)
            continue;
        
        if(arr[i] > second)
        {
            second = arr[i];
            ctr = i;
        }
    }
    
    //idk why this was needed but it catches for the 1st occurence of the 2nd highest number
    for(int i = ctr; i <= arr[0]; ++i) 
    {
        if(arr[i] == second)
        {
            ctr = i;
            break;
        }
    }
    
    // printf("%d %d %d %d\n", max, second, ctr, arr[0]); - printing values for debugging
    
    //create pointer to new array with size of the length from index of second til end of arr
    int *sortedSouls = malloc(sizeof(int) * (arr[0] - ctr + 1));

    // setting the length of the new array at index 0
    sortedSouls[0] = (arr[0] - ctr + 1);
    
    //error catching to see if the size of argument array is == 1
    if(arr[0] == 1)
        sortedSouls[0] = 0;
    
    int count = 1;
    //setting values of new array to the values of arg array from index of second onward
    for(int i = ctr; i <= arr[0]; ++i) 
    {
        sortedSouls[count] = arr[i];
        count++;
    }
    
    return sortedSouls;
}