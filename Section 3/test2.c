#include <stdio.h>
#include <stdlib.h>
#define MAX 3

/* FUNCTION PROTOTYPES - Implementations begin at line 190 */
void initialize(int arr[], int* count);
void display(int arr[], int count);
int searchElem(int arr[], int count, int elem);
int insertLast(int arr[], int* count, int elem);
int insertFirst(int arr[], int* count, int elem);
int insertAtPos(int arr[], int* count, int elem, int pos);
int removeLast(int arr[], int* count);
int removeFirst(int arr[], int* count);
int removeAtPos(int arr[], int* count, int pos);
int removeElem(int arr[], int* count, int elem);

int getRange(int arr[], int count);
int* getEven(int arr[], int count);
int isSortedAscending(int arr[], int count);
void moveSmallestToFirst(int array[], int count);
void sortArray(int arr[], int count);

int main(void) {
    int array[MAX];
    int count;
    
    //initialize the array
    initialize(array, &count);

    //variables for command selection, number input, and position selection
    int command;
    int elem, pos;
    
    //return value
    int ret;
    
    //for the array of even numbers (command #12)
    int *even;
    
    
    do {
      system("cls");
      printf("\n-------------------");
      printf("\n 1  - Initialize/reset array");
      printf("\n 2  - Display array");
      printf("\n 3  - Search for an element");
      printf("\n 4  - Insert new element at the end");
      printf("\n 5  - Insert new element at the start");
      printf("\n 6  - Insert new element at a custom position");
      printf("\n 7  - Delete an element at the end");
      printf("\n 8  - Delete an element at the start");
      printf("\n 9  - Delete an element at a custom position");
      printf("\n 10 - Delete a specific element");
      printf("\n");
      printf("\n 11 - Get the range");
      printf("\n 12 - Get the even numbers");
      printf("\n 13 - Check if sorted in ascending order");
      printf("\n 14 - Moving the smallest element to the beginning of the array");
      printf("\n 15 - Sort array");
      printf("\n");
      printf("\n 0  - Exit");
      printf("\n-------------------");
      printf("\nCOMMAND #: ");
      scanf("%d", &command);
      
      switch(command) {
        case 1:
          initialize(array, &count);
          printf("\nArray initialized!");
          break;
        case 2:
          display(array, count);
          printf("\n");
          break;
        case 3:
          printf("Enter element: ");
          scanf("%d", &elem);
          ret = searchElem(array, count, elem);
          if(ret!=-1){
        	printf("\nElement found at index %d.",ret);
		  }else{
		  	printf("\nElement not found.");
		  }
          printf("\n");
          break;
        case 4:
          printf("Enter element: ");
          scanf("%d", &elem);
          ret = insertLast(array, &count, elem);
          if(ret!=0){
        	printf("\nElement successfully inserted!");
		  }else{
		  	printf("\nOperation failed.");
		  }
          break;
        case 5:
          printf("Enter element: ");
          scanf("%d", &elem);
          ret = insertFirst(array, &count, elem);
          if(ret!=0){
        	printf("\nElement successfully inserted!");
		  }else{
		  	printf("\nOperation failed.");
		  }
		  break;
 		case 6:
          printf("Enter element: ");
          scanf("%d", &elem);
          printf("Enter position: ");
          scanf("%d", &pos);
          ret = insertAtPos(array, &count, elem, pos);
          if(ret!=0){
        	printf("\nElement successfully inserted!");
		  }else{
		  	printf("\nOperation failed.");
		  }
		  break;
        case 7:
          ret = removeLast(array, &count);
          if(ret!=0){
        	printf("\nElement successfully removed!");
		  }else{
		  	printf("\nOperation failed.");
		  }
          break;
        case 8:
          ret = removeFirst(array, &count);
          if(ret!=0){
        	printf("\nElement successfully removed!");
		  }else{
		  	printf("\nOperation failed.");
		  }
          break;
        case 9:
          printf("Enter position: ");
          scanf("%d", &pos);
          ret = removeAtPos(array, &count, pos);
          if(ret!=0){
        	printf("\nElement successfully removed!");
		  }else{
		  	printf("\nOperation failed.");
		  }
          break;
        case 10:
          printf("Enter element: ");
          scanf("%d", &elem);
          ret = removeElem(array, &count, elem);
          if(ret!=0){
        	printf("\nElement successfully removed!");
		  }else{
		  	printf("\nOperation failed.");
		  }
          break;
        case 11:
          printf("\nThe range is %d", getRange(array, count));
          break;
        case 12:
          even = getEven(array, count);
          printf("\nEven numbers: ");
          for(pos=0; even[pos]!=-1; pos++){
          	printf("%d ",even[pos]);
		  }
		  break;
		case 13:
		  ret = isSortedAscending(array, count);
          if(ret==1){
        	printf("\nElements are sorted.");
		  }else{
		  	printf("\nElements are not sorted.");
		  }
		  break;
		case 14:
		  moveSmallestToFirst(array, count);
          printf("\nSmallest element transferred to beginning of array.");
          break;
        case 15:
		  sortArray(array, count);
          printf("\nArray is sorted!");
          break;
      }
      if(command!=0){
      	printf("\nPress any key to continue.");
        getch();	
	  }
    } while (command != 0);

    return 0;
}

/* WRITE YOUR CODES HERE! */

// Ian de Jesus
void initialize(int arr[], int* count){
	*count = 0; // this sets array size to 0

  for (int i = 0; i < MAX; i++)
  {
    arr[i] = 0;
  }
}

// Giulio Yongco
void display(int arr[], int count){
	for(int i = 0; i< count; ++i){
        printf("%d[%d] ", arr[i], i);
    }
}

// Estelito Buenavista
int searchElem(int arr[], int count, int elem){
	for (int i = 0; i < count ; i++){
    if (arr[i] == elem)
      return i;
  }
  return -1;
}

//Philip Go
int insertLast(int arr[], int* count, int elem){
  int result;

    result = 1;
    if(*count >= MAX){
        printf("List is full");
        result = 0;
    }else if(searchElem(arr, *count, elem) != -1){
        printf("Element already exists");
        result = 0;
    }else{
        arr[*count] = elem;
        *count = *count + 1;
    }
    return result;
}

// Iand de Jesus
int insertFirst(int arr[], int* count, int elem){
  int successful;

    successful = 1;
	if(*count >= MAX) { // catcher for count above 10
        printf("List is full");
        successful = 0;
    } else if(searchElem(arr, *count, elem) != -1) { // catcher for existing element
        printf("Element already exists");
        successful = 0;
    }
  
  if (successful) {

    for (int i = *count - 1; i >= 0; i--)
    {
      arr[i + 1] = arr[i]; // shifts everything from left to right, starting from right
    }

    arr[0] = elem; // sets the first element to input

    (*count)++; // increase count of array
  
  }

  return successful; // 0
}

int insertAtPos(int arr[], int* count, int elem, int pos){
	// Check 1: List is full
  if (*count == MAX)
  {
    printf("List is full\n");
    return 0;
  }

  // Check 2:
  // * POSITION IS INVALID IF: pos < 0 || pos > count
  if (pos < 0 || pos > *count)
  {
    printf("Invalid position\n");
    return 0;
  }

  // Check 3: Element already exists
  if (searchElem(arr, *count, elem) != -1)
  {
    printf("Element already exists\n");
    return 0;
  }

  // Logic here
  for (int i = *count - 1; i >= pos; i--)
  {
    arr[i + 1] = arr[i];
  }

  arr[pos] = elem;
  (*count)++;
  return 1;
}

int removeLast(int arr[], int* count){
  int returnee = 0;

  if(*count > 0){
    *count -= 1;
    returnee = 1;
  }
  else
  {
    puts("List is empty");
  }

	return returnee;
}

int removeFirst(int arr[], int* count){
  if (*count == 0)
  {
    puts("List is empty");
    return 0;
  }
  else {

	for (int i = 0; i < *count; i++) {
            arr[i] = arr[i + 1]; 
        }
        *count -= 1;
        return 1;
  }
}

int removeAtPos(int arr[], int* count, int pos) {
    
    // check if array is empty
    if (*count == 0) {
        printf("List is empty");
        return 0;
    }
    
    // check if the pos is invalid
    if (pos < 0 || pos > *count) {
        printf("Invalid Position");
        return 0;
    }
    
    else {
        for (int i = pos; i != *count; i++) {
            arr[i] = arr[i + 1];
        }
        (*count)--;
        return 1;
    }
    
}

int removeElem(int arr[], int* count, int elem){
	int elemIndex = searchElem(arr, *count, elem); // gets position of the element

    if (*count == 0) {
        printf("\nList is empty");
        return 0;
    } else if (elemIndex < 0) {
        printf("Element does not exist");
        return 0;
    }
    
    
    else { // removeAtPos()
        for (int i = elemIndex; i < *count; i++) {
            arr[i] = arr[i + 1]; 
        }
        *count -= 1;
        return 1;
    }
}
int getRange(int arr[], int count){
  if(count == 0)
    return 0;

	int min, max;
  min = max = arr[0];

  for(int i = 0; i < count; i++)
  {
    if(arr[i] > max)
      max = arr[i];

    if(arr[i] < min)
      min = arr[i];
  }

  return max - min;
}

int* getEven(int arr[], int count){
	
}

int isSortedAscending(int arr[], int count){
	
}

void moveSmallestToFirst(int array[], int count){
  // int i;
  // int smallest;
	// for(i = 0; i < count; i++)
  // {
  //   if(array[i] < smallest)
  //   {
  //     smallest = array[i];
  //   }
  // }
  // if(array[0] )
}

void sortArray(int arr[], int count){}