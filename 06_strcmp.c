// strcmp() - String Comparison :
// Description : Compares two strings lexicographically.

#include <stdio.h>
#include <string.h>
int main()
{

  char str1[] = "SOham";
  char str2[] = "soham";

  if (strcmp(str1, str2) == 0)
  {
    printf("Both strings are same");
  }
  else
  {
    printf("Both strings are different");
  }

  return 0;
}