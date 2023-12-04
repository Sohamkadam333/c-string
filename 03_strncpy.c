// strncpy() - String Copy(Limited) :
// Description : Copies up to n characters from one string to another.

#include <stdio.h>
#include <string.h>
int main()
{
  char *source = "Hello";
  char destination[10];
  strncpy(destination, source, 3);
  destination[3] = '\0';
  printf("String in destination = %s\n", destination);
  return 0;
}