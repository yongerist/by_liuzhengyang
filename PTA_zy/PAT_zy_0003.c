#include<stdio.h>
float in[7][6];
int main()

{
  int n,i,j;
  float k;
  scanf("%d",&n);
  
  for(int ii=0;ii<n;ii++)
  { 
    scanf("%d %d %f",&i,&j,&k);
    in[j][i]+=k;
   
  }
  for(int r=1;r<=4;r++)
    for(int p=1;p<=5;p++)
    in[6][r]+=in[p][r];
  for(int r=1;r<=6;r++)
    for(int p=1;p<=4;p++)
    in[r][5]+=in[r][p];
   
  for(i=1;i<7;i++)
  {
    for(j=1;j<5;j++)
    printf("%.1f\t",in[i][j]);
    printf("%.1f\n",in[i][j]);


  }
}