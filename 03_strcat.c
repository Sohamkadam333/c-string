// strcat() - String Concatenation :
// Description : Concatenates(appends) one string to the end of another.

#include <stdio.h>
#include <string.h>
int main()
{
  char str1[] = "Hello, ";
  char str2[] = "World";
  strcat(str1, str2);
  printf("str1 = %s", str1);
  return 0;
}