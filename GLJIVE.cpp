#include<stdio.h>
using namespace std;
int main()
{
    int a[11],count=0,count1=0,num,num1;
    for(int i=0;i<10;i++)
       scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {
         if(count+a[i]<=100)
            count=count+a[i];
         else
         {
             count1=count+a[i];
             break;
         }
    }
    if(count1>1)
    {
     num=100-count;
     num1=count1-100;
    if(num<num1)
       printf("%d",count);
    else
       printf("%d",count1);
    }
    else 
    printf("%d",count);
return 0;
}

