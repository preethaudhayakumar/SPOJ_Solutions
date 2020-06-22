#include<stdio.h>
using namespace std;
int main()
{
     int n,sum=0,a[10000],count=0,avg;
     while(1)
     {
       scanf("%d",&n);
       if(n==-1)
          break;
       else
       {
           for(int i=0;i<n;i++)
           {
              scanf("%d",&a[i]);
              sum=sum+a[i];
              }
           avg=sum%n;
           if(avg!=0)
              printf("-1\n");
           else
           {
               avg=sum/n;
               for(int i=0;i<n;i++)
               {
                   if(a[i]>avg)
                       count=count+(a[i]-avg);
               }
               printf("%d\n",count);
               }
       }
       count=0;
               sum=0;
               avg=0;
           
     }
return 0;
}

