// strcpy() - String Copy :
// Description : Copies the content of one string into another.
#include <stdio.h>
#include <string.h>
int main()
{
  char str1[] = "C programming";
  char str2[30];

  strcpy(str2, str1);
  printf("str2 = %s\n", str2);
  return 0;
}