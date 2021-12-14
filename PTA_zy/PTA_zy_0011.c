#include <stdio.h>
void output(char a[][30], int n);
int main() 
{
  int n;
  char a[10][30];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    {scanf("%s",& a[i][30]);
    //printf("%s\n", a[i]);
    
    }
  output(a, n);
}
void output(char a[][30], int n)
{
  int m, i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &m);
    printf("%s\n", a[m+1]);   //输出二维数组字符串不用加列标
  }
  
}