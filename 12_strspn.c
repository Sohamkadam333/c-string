// The strspn function in C is used to find the length of the initial segment of a string that consists entirely of characters from a specified set of characters. It is declared in the <string.h> header file. The function returns the length of the substring, i.e., the number of characters at the beginning of the string that match any character in the specified set.

#include <stdio.h>
#include <string.h>
int main()
{
  const char *str = "1234sjf57";
  const char *charset = "0123456789";

  size_t length = strspn(str, charset);
  printf("length of inital segment = %zu\n", length);

  return 0;
}