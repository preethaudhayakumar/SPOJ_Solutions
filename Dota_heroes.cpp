#include<stdio.h>
using namespace std;
int main()
{
    int tc,n,m,d,sum=0,count;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d %d",&n,&m,&d);
        int a[n+1];
        for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        {
                if((a[i]>d) && (a[i]%d!=0))
                {
                          count=a[i]/d;
                          sum=sum+(d*count);
                          count=0;
                 }
                
                else
                    if(a[i]%d==0 && a[i]>d)
                    {
                       count=a[i]/d;
                       sum=sum+(d*(count-1));          
                       count=0;
                       }
        }
        count=d*m;
        if(sum>=count)
                             printf("YES\n");
                else
                             printf("NO\n");
        sum=0;
    }
return 0;
}


