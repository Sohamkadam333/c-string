// strchr() - String Search for Character:
// Description: Returns a pointer to the first occurrence of a character in a string.

#include <stdio.h>
#include <string.h>
int main()
{

  char str[] = "Hello World";
  char *ptr = strchr(str, 'o');
  printf("First occurrence of o in Hello World is = %ld", ptr - str + 1);
  return 0;
}