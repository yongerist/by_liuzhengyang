#include<stdio.h>
#define        MAX        100
void findMin(int M[][MAX],int x[],int n,int m);

int main()
{
    int        matrix[MAX][MAX] ; 
    int        x[MAX] ;
    int        n, m, i, j ;

    printf("HELLL");
    scanf( "%d%d" , &n , &m );
    for( i = 0 ; i < n ; i++ )
    {    
        for( j = 0 ; j < m ; j++ )
        {
            scanf("%d", &matrix[i][j]) ;
        }
    }

    findMin(matrix,x,n,m);

    for( i = 0 ; i < m - 1 ; i++ )
        printf( "%d " , x[i] ) ;
    printf( "%d\n" , x[i] ) ;

    return 0 ;
}

/* 请在这里填写答案 */
void findMin(int M[][MAX],int x[],int n,int m)
{
  for(int i = 0;i < m;i++)
  { int min=M[0][i];                               //
    for(int r=0;r<n;r++)
    {
        if(M[r][i]<=min)
        {
          min=M[r][i];
         
        }
    }
    x[i]=min;
  }
}