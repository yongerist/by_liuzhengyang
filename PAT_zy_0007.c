#include <stdio.h>
int main()
{
  int n;
  int ii, j;
  scanf("%d", &n);
  int in[101][101] = {0};
  int x = 0, y = 0;
  in[x][y] = 1;
  for (int i = 1; i <= n * n;)
  {

    if (y == 0)
    {
      in[x + 1][y] = in[x][y] + 1;
      ;
      y = y + 1;
      for (; x != 0; x -= 1, y += 1)
      {
        in[x][y] = in[x + 1][y - 1] + 1;
        ;
      }
      in[x][y] = in[x + 1][y - 1] + 1;
      if ((x == 0 && y == n - 1) || (x == n - 1 && y == 0))
        break;
      in[x][y + 1] = in[x][y] + 1;
      i += 2;
      x = x + 1;

      for (; y != 0; y -= 1, x += 1)
      {
        in[x][y] = in[x - 1][y + 1] + 1;
        ;
      }
      in[x][y] = in[x - 1][y + 1] + 1;
      ;
      if ((x == 0 && y == n - 1) || (x == n - 1 && y == 0))
        break;
    }
  }

  while (x < n && y < n)
  {

    if (y == n - 1)
    {
      in[x + 1][y] = in[x][y] + 1;
     
      ;
      x += 2;
      y--;
      for (; x < n - 1; x += 1, y -= 1)
      {
        in[x][y] = in[x - 1][y + 1] + 1;
        ;
      
      }
      in[x][y] = in[x - 1][y + 1] + 1;
    }
   
    if (x == n - 1 && y == n - 1)
      break;

    if (x == n - 1)
    {
      in[x][y + 1] = in[x][y] + 1;
      
      y++;
      y += 1;
      x -= 1;
      for (; y < n - 1; y += 1, x -= 1)
      {
        in[x][y] = in[x + 1][y - 1] + 1;

        
      }
      in[x][y] = in[x + 1][y - 1] + 1;
      
    }
    if (x == n - 1 && y == n - 1)
      break;
  }



  for (ii = 0; ii < n; ii++)
  {
    {
      for (j = 0; j < n - 1; j++)
        printf("%d ", in[ii][j]);
    }
    printf("%d\n", in[ii][j]);
  }
}