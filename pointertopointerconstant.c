#include <stdio.h>
int main()
{
  int c = 10;
  const int *ptr1 = &c;
  printf("%d", *ptr1);
}