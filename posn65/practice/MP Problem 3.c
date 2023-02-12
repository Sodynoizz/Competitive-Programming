#include <stdio.h>
#include <string.h>

void replace_char(char *string)
{
  int slen = strlen(string), i;
  for (i = 0; i < slen; i++)
    if (string[i] == 'x')
      string[i] = '*';
}

int main(void)
{
  
  char ch[100];
  gets(ch);
  replace_char(ch);
  printf("%s", ch);

  return 0;
}

