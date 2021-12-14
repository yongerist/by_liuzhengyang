#include <stdio.h>

#include <stdio.h>

#define MAX 100

void reverse(int M[][MAX], int x[][MAX], int n, int m);

int main()
{
  int matrix[MAX][MAX];
  int x[MAX][MAX];
  int n, m, i, j;

  scanf("%d%d", &n, &m);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &matrix[i][j]);
      //printf("matrix[%d][%d]=%d\n ",i,j,matrix[i][j]);
    }
  }
  reverse(matrix, x, n, m);
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", x[i][j]);
    }

    if (i == m - 1)
      continue;
    printf("\n");
  }

  return 0;
}

void reverse(int M[][MAX], int x[][MAX], int n, int m)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    { //printf("M[%d][%d]=%d\n ",i,j,M[i][j]);
      x[j][i] = M[i][j];
      //printf("x[%d][%d]=%d\n ",i,j,x[i][j]);
    }
  }
}
