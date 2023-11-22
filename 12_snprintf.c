// snprintf() - String Formatting with Limit : Description : Writes formatted data to a string with a specified maximum number of characters to write

#include <stdio.h>
#include <string.h>
int main()
{
  int num = 42;
  char destination[20];
  snprintf(destination, sizeof(destination), "Number is = %d", num);
  printf("String destination = %s\n", destination);
  return 0;
}