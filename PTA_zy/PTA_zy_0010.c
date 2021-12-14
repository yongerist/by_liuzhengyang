#include<stdio.h>
#include<stdlib.h>


int * create(int n) ;
void cal(int * array, int size) ;

int main()
{
    int * array , n , i ;

    scanf( "%d", &n );

    array = create(n) ;
    if ( array == NULL )
        return -1 ; //这里的return是因为没有获得内存而直接结束程序。


    cal( array, n) ;
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%d" , *(array+i) ) ;
        if ( i == n - 1 ) printf("\n") ;
        else printf(" ") ;
    }     

    free(array) ;

    return 0;
}

/* 请在这里填写答案 */
int * create(int n) 
{ int*array;
  if(n==0) return NULL;
   array=(int *)malloc(n*sizeof(int));
   return array;
}

void cal(int * array, int size)
{ 
  
  
  float sum=0,aver;
  for (int i=0;i<size;i++)
  { 
    scanf("%d",array+i) ;
    //printf("%d\n",*(array+i)) ;
  }
  int max=*array,min=*array;
  for(int i=0 ; i<size ; i++) 
  { 
    
    sum+=*(array+i);
    if(*(array+i)>max)
    max=*(array+i);
    if(*(array+i)<min)
    min=*(array+i);
  }
  aver=sum/size;
  printf("%d\n",(int)sum);
  printf("%.2f\n",aver);
  printf("%d\n",max);
  printf("%d\n",min);
}
