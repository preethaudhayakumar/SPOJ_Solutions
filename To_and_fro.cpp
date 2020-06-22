#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    
    int tc=0,k=0,n1=1,n2=0,row,column,count=1,mul=2;
    while(1)
    {
         scanf("%d",&column);
         if(column==0)
            break;
         else
         {
             char str[210],a[201];
             scanf("%s",a);
             row=strlen(a)/column;
             for(int i=0;i<column;i++)
             {
               str[k++]=a[i];
               for(int j=0;j<row-1;j++)
               {
                    if(count%2!=0)
                    {
                        str[k++]=a[column*mul-n1];
                        count++;
                        tc++;
                    }
                    else
                    {
                        str[k++]=a[column*mul+n2];
                        count++;
                        tc++;
                    }
                    if(tc==2)
                    {
                        mul=mul+2;
                        tc=0;
                    }
               }
               mul=2;
               n1++;
               n2++;
               count=1;
               tc=0;
             }
             str[k]='\0';
             printf("%s\n",str);
             k=0;n1=1;n2=0;count=1;tc=0;mul=2;
         }
    }
return 0;
}

