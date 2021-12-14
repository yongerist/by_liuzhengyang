#include<stdio.h>

void delcharfun(char *str,char ch);

int main()
{
    char    ch,str[110];

    scanf("%s",str);    //读入字符串 
    getchar();            //读取回车符号 
    scanf("%c",&ch);    //读入字符 
    delcharfun(str,ch);    //删除 
    printf("%s\n",str);    //输出删除后结果 
    return 0;    
}

/* 请在这里填写答案 */
void delcharfun(char *str,char ch)
{ int i=0;
  while(*(str+i)!='\0')
  { 
    if(*(str+i)==ch)
    {int j=i;
    i--;
      while(*(str+j)!='\0')
      {*(str+j)=*(str+j+1);
        j++;
      }
      
    }
    //printf("%s\n",str); 
    i++;
  }
  
}