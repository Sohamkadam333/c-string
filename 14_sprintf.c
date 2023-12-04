// sprintf() - String Formatting:
// Description: Writes formatted data to a string.

#include <stdio.h>
#include <string.h>
int main()
{
  char *str;
  sprintf(str, "Hello World %d", 42);
  printf("str = %s", str);
  return 0;
}