// strncmp() - String Comparison(Limited) :
// Description : Compares the first n characters of two strings.

#include <stdio.h>
#include <string.h>
int main()
{

  char str1[] = "sohAM";
  char str2[] = "soham";

  if (strncmp(str1, str2, 3) == 0)
  {
    printf("Both strings are same");
  }
  else
  {
    printf("Both strings are different");
  }

  return 0;
}