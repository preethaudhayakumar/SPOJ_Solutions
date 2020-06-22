#include<stdio.h>
int main()
{
    int i=0,a=0;
    while(a!=42)
    {
          scanf("%d",&a);
          if(a!=42)
              printf("%d\n",a);
          else
              break;
    }
return 0;
}

