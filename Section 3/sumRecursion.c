#include <stdio.h>

int sum(int n)
{
  static int result = 0;

  if(n == 0)
    return result;
  else {
    return sum(n - 1) + n;
  }
  
}

int main(void)
{
  int n = 9;
  int x = sum(n);
  printf("%d", x);


  return 0;
}