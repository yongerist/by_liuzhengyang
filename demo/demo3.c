#include <stdio.h>
int main()
{
  int a, b;
  //scanf("%d", &a);
  a = 100;
  b = a + 100;
  b++;
  a = a + 100;
  a = a + b;
  printf("%d", a+100);
  
}