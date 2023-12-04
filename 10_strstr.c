// strstr() - String Search for Substring:
// Description: Returns a pointer to the first occurrence of a substring in a string.

#include <stdio.h>
#include <string.h>
int main()
{
  char str[] = "Hello World";
  char *ptr = strstr(str, "World");
  printf("First occurrence of substring = %ld", ptr - str + 1);
  return 0;
}