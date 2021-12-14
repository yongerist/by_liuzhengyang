#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char line[1024];
  char buffer[1024];
  int j = 0;
  scanf("%s", line);
  for (int i = 0; i < strlen(line); i++)
  {

    if ((line[i] + 1 == line[i + 1]) && (line[i + 1] + 1 == line[i + 2]))
    {
      buffer[j] = line[i];
      while (line[i] + 1 == line[i + 1])
      {
        i++;
      }
      j++;
      buffer[j] = '-';
      j++;
      buffer[j] = line[i];
    }
    else
    {
      buffer[j] = line[i];
    }
    j++;
  }
  for (int i = 0; i < j; i++)
  {
    printf("%c", buffer[i]);
  }
}