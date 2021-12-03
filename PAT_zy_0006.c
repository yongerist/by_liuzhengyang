#include <stdio.h>
int main()
{
  long n;
  long in[101][101] = {0};
  long sum[101] = {0};
  scanf("%ld", &n);
  for (long i = 0; i < n; i++)
    for (long j = 0; j < n; j++)
      scanf("%ld", &in[i][j]);

  for (long i = 0; i < n; i++)
    for (long j = 0; j < n; j++)
    {
      sum[i] += in[i][j];
      //prlongf("sum[%d]=%d\n",i,sum[i]);
    }
  for (long i = 0; i < n - 1; i++)
  {
    for (long cnt = 0; cnt < n - 1-i ; cnt++)
    {
      if (sum[cnt] > sum[cnt + 1])
      {
        for (long k = 0; k < n; k++)
        {
          long temp = in[cnt][k];
          in[cnt][k] = in[cnt + 1][k];
          in[cnt + 1][k] = temp;
        }
        int tt = sum[cnt];
        sum[cnt] =sum[cnt+1];
        sum[cnt+1]=tt;
      }
    }
  }
  long i, j;
  for (i = 0; i < n; i++)
  {
    {
      for (j = 0; j < n - 1; j++)
        printf("%ld ", in[i][j]);
    }
    printf("%ld\n", in[i][j]);
  }
}
