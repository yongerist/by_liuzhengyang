#include<stdio.h>
int max(int a[][101],int n,int m,int i, int j);
int main()
{
  int n,m,boo=0;
  int in[101][101]={0};


  scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      scanf("%d", &in[i][j]);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      {  
         //printf("%d\n", max(in,n,m,i,j) );
        if(max(in,n,m,i,j))
        {
          printf("The saddle point is (%d,%d)=%d.",i,j,in[i][j]);
          boo=1;
        }
      } 
if(boo==0)
printf("There is no saddle point in the matrix.");
}

int max(int a[][101],int n,int m,int i, int j)
{
  int boo=1;
for(int b=0;b<n;b++)
{
  if( a[i][j]>a[b][j])
    boo=0;
}

for(int c=0;c<m;c++)
{
  if( a[i][j]<a[i][c])
  boo=0;
}

return boo;
}