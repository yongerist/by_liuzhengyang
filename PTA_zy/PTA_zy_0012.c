#include <stdio.h>
void out_put(int*a, int n);
int main()
{
  int *a,n;
scanf("%d",&n);
a=(int * )malloc(sizeof(int) * n);// 建立长度为n的动态整型数组
for(int i=0;i<n;i++)
{ 
  scanf("%d",(a+i));
}
out_put(a,n);
free(a);//释放动态内存。
}
void out_put(int*a, int n)
{int i;
  for( i=0;i<n-1;i++)
{
  printf("%d ",(-10)*(*(a+i)));
}
printf("%d",(-10)*(*(a+i)));
}