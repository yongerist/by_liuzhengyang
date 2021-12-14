#include <stdio.h>
int main()
{
  int m, n;
  int in[11][11] = {0};
  scanf("%d %d", &m, &n);
  for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
      scanf("%d", &in[i][j]);
  int x, y;
  scanf("%d %d", &x, &y);
  int sum = 0;
  if ((x != m) || (x != 1) || (y != 1) || (y != n))
    sum = in[x - 1][y] + in[x - 1][y - 1] + in[x - 1][y + 1] + in[x][y - 1] + in[x][y + 1] + in[x + 1][y] + in[x + 1][y + 1] + in[x + 1][y - 1];
  printf("%d", sum);
}
