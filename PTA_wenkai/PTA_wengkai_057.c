#include<stdio.h>
double xiang(int a);
int main(void)
{
  double sum = 0;
  int n;
  scanf("%d", &n);
  for(int i = 0; i <= n; i++)
  {
    sum += xiang(i);
  }
  printf("%.8lf", sum);
  return 0;
}

double xiang(int a)
{
  double sum = 1;
  if(a == 0)
    return 1;
  for(int i = 1; i <= a;i++)
  {
    sum *= i;
  }
  return 1/sum;
}