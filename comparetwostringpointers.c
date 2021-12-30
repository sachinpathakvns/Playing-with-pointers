#include <stdio.h>
int main()
{
  char s[20], s1[20], *str1, *str2;
  int i, equal = 0;
  printf("\n");
  printf("ENTER FIRST STRING\n");
  gets(s);
  printf("ENTER SECOND STRING\n");
  gets(s1);

  str1 = s;
  str2 = s1;

  while (*str1 == *str2)
  {
    if (*str1 == '\0' || *str2 == '\0')
      break;

    str1++;
    str2++;
  }
  if (*str1 == '\0' && *str2 == '\0')
    printf("\n\n SAME ");
  else
    printf("\n\n NOT SAME ");
}