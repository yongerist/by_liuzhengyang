#include <stdio.h>

char *locatesubstr(char *str1,char *str2);
int main()
{
    char str1[505],str2[505];
    char *p;
    gets(str1);
    gets(str2);
    p=locatesubstr(str1,str2);
    

    if(p==NULL)    printf("NULL!\n");
    else    puts(p);

    return 0;
}

/* 请在这里填写答案 */
char *locatesubstr(char *str1,char *str2)
{int i=0;
  while(*(str1+i)!='\0') 
  { 
    if (*(str1+i)==*str2)
    { 
      int boo = 1;
      int j=0;
      int ii=i;
      while(*(str2+j)!='\0') 
      { if(*(str1+ii)=='\0')
        { 
          boo = 0;
          break;
        }
        if(*(str1+ii)!=*(str2+j))
        boo=0;
        ii++;
        j++;
      }
      if(boo==1)
      return str1+i;
    }
    i++;
   // printf("%d\n",i);
  }
  return NULL;
}

