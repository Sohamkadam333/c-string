// strncat() - String Concatenation(Limited) : Description : Concatenates a specified number of characters from one string to another.

#include <stdio.h>
#include <string.h>
int main()
{
  char str1[20] = "Hello, ";
  char str2[] = "World";
  strncat(str1, str2, 3);
  printf("str1 = %s\n", str1);
  return 0;
}