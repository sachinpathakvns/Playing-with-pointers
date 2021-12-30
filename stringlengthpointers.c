#include <stdio.h>
#include <string.h>
int main()
{
  char s[20];
  char *p = s;
  int len = 0;
  printf("\n");
  printf("ENTER SOME WORDS\n");
  gets(s);

  while (*p != '\0')
  {
    len++;
    p++;
  }
  printf("length of string is : %d\n", len);
}
