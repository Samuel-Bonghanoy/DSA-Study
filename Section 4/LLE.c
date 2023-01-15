#include <stdio.h>
#include <stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*first = NULL;

void create(int A[], int size)
{
  int i;
  struct Node *t, *last;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  first->next = NULL;
  last = first;

  for(i = 1; i < size; i++)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void display(struct Node *p)
{
  while(p != NULL)
  {
    printf("%d ", p->data);

    p = p->next;
  }
  printf("\n");

  //recursive display
  // if(p != NULL)
  // {
  //   display(p->next);
  //   printf("%d ", p->data);
  // }

}

int countNodes(struct Node *p)
{
  int i = 0;

  while(p != NULL)
  {
    i++;
    p=p->next;
  }

  return i;
}

int sumNodes(struct Node *p)
{
  int sum = 0;
  while(p != NULL)
  {
    sum+=p->data;
    p = p->next;
  }
  return sum;
}

int getMax(struct Node *p)
{
  int max = 0;
  while(p != NULL)
  {
    if(p->data > max)
      max = p->data;

    p = p->next;
  }
  return max;
}

struct Node * search(struct Node *p, int key)
{
  while(p != NULL)
  {
    if(p->data == key)
      return p;

    p = p->next;
  }

  return NULL;
}

struct Node *searchAndMoveToFront(struct Node *p, int key)
{
  struct Node *q;

  if(first->data == key)
    return p;

  while(p != NULL)
  {
    if(p->data == key)
    {
      q->next = p->next;
      p->next = first;
      first = p;
      return p;
    }

    q = p;
    p = p->next;
  }

  return NULL;
}

void insertFront(struct Node *p, int value)
{
  struct Node *t = (struct Node *)malloc(sizeof(struct Node));
  t->data = value;
  t->next = first;
  first = t;
}

void insertAtPos(struct Node *p, int index, int value)
{
  struct Node *q, *t = (struct Node *)malloc(sizeof(struct Node));
   t->data = value;

  if(index == 0)
  {
    t->next = first;
    first = t;
  }
  else 
  {
    for(int i = 0; i < index - 1; i++)
      p = p->next;

    t->next = p->next;
    p->next = t;
  }
}

int deleteFront(struct Node *p)
{
  if(first == NULL)
    return -1;

  struct Node *q;
  q = first;
  first = first->next;
  int data = q->data;
  free(q);
  return data;
}

int deleteAtPos(struct Node *p, int index)
{
  struct Node *q;
  int data;

  if(first == NULL)
    return -1;

  for(int i = 0; i < index; i++)
  {
    q = p;
    p = p->next;
  }
  q->next = p->next;
  data = p->data;
  free(p);
  return data;
}

void reverse(struct Node *p)
{
  struct Node *q = NULL, *r = NULL;

  while(p != NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }

  first = q;
}





int main(void)
{
  // int A[] = {1,2,3,4,5,6};
  // int size = 6;
  // create(A, size);

  // display(first);

  insertFront(first, 60);
  insertFront(first, 50);
  insertFront(first, 40);
  insertFront(first, 30);
  insertFront(first, 20);
  insertFront(first, 10);
  display(first);

  int sum = sumNodes(first);
  int count = countNodes(first);
  int max = getMax(first);
  printf("SUM: %d and COUNT: %d and MAX: %d \n", sum, count, max);

  reverse(first);
  display(first);
  return 0;
}