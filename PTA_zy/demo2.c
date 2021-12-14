#include <stdio.h>
void GetMemory(char *p);
int main(){
Test();
}

void GetMemory(char *p)
{
       p = malloc(100);
}
void Test(void) 
{
      char *str = NULL;
      char *p = &str;
      GetMemory(p);	
      strcpy(str, "hello world");
      printf(str);
}