#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
}*first = NULL;

void create(int A[], int n) //where n is the size
{
  int i;
  struct Node*t, *last;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data=A[0];
  first->next=NULL;
  last=first;

  for(i = 1; i<n; i++)
  {
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }

}

void Display(struct Node *p)
{
  while(p!=NULL)
  {
    printf("%d\n", p->data);
    // printf("%d\n", p->next);
    p = p->next; //even if we pass first here, it will not change for some reason
  }
}

void recursiveDisplay(struct Node *p)
{
  if(p != NULL)
  {
    recursiveDisplay(p->next);
    printf("%d ", p->data);
  }
}

int countNodes(struct Node *p)
{
  int i = 0;

  while(p != NULL)
  {
    i++;
    p = p->next;
  }

  return i;
}

int getSumNodes(struct Node *p)
{
  int sum = 0;

  while(p != NULL)
  {
    sum += p->data;
    p = p->next;
  }

  return sum;
}

int getMaxNodes(struct Node *p)
{
  int max = p->data;

  while(p != NULL)
  {
    if(p->data > max)
      max = p->data;

    p = p->next;
  }

  return max;
}

int main(void)
{
  int A[] = {3,5,7,10,15};

  create(A, 5);
  printf("First: %d\n", first);

  Display(first);
  printf("First: %d\n", first);

  recursiveDisplay(first);
  printf("\n");

  int count = countNodes(first);
  printf("COUNT: %d\n", count);

  int sum = getSumNodes(first);
  printf("SUM: %d\n", sum);

  int max = getMaxNodes(first);
  printf("MAX: %d\n", max);

  return 0;
}