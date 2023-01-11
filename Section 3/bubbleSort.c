#include <stdio.h>

void bubbleSort(int *arr, int size)
{
  for(int i = 0; i < size; i++)
  {
    for(int j = 0; j < size - 1; j++)
    {
      if(arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main(void)
{
  int size = 10;
  int arr[10] = {4,1,3,2,5,7,6,9,8,10};

  for(int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  } 

  printf("\n");
  bubbleSort(arr, size);

  for(int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  } 

  return 0;
}