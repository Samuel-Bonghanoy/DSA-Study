#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[] = "abcdefjhijklmnopqrstuvwxyz";

  char d[27];

  memcpy(d, s, sizeof(char) * 27);

  printf("d: %s\n", d);

  char e[10];

  memcpy(e, s+8, sizeof(char) * 9);
  e[9] = '\0';

  printf("e: %s\n", e);
}