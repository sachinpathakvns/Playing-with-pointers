#include <stdio.h>
void swapno(int *a, int *b);
int main()
{
  printf("\n");
  int x = 4, y = 6;
  swapno(&x, &y);
  printf("\n");
  swapno1(1, 2);
}
void swapno(int *a, int *b)
{
  int t;
  printf("before a=%d,b=%d\n", *a, *b);
  t = *a;
  *a = *b;
  *b = t;
  printf("after a=%d,b=%d\n", *a, *b);
}
void swapno1(int a, int b)
{
  int t;
  printf("before a=%d,b=%d\n", a, b);
  t = a;
  a = b;
  b = t;
  printf("after a=%d,b=%d\n", a, b);
}