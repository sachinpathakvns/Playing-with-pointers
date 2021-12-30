#include <stdio.h>
#include <string.h>
int main()
{
  char s[20];
  int palin = 0, len, i;
  int *p;
  printf("\n");
  printf("ENTER SOME WORDS\n");
  scanf("%s", s);
  p = &s[0];
  len = strlen(s) - 1;

  for (i = 0; i <= len; i++)
  {
    if (*(p + i) != *(p + len - i - 1))
    {
      palin = palin + 1;
    }
  }
  printf("\n");
  if (palin == len)
  {
    printf("%s is palindrome ", p);
    printf("\n");
  }
  else
  {
    printf("%s is not palindrome ", p);
    printf("\n");
  }
}