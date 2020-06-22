#include<stdio.h>
using namespace std;
long long int func(long long int a)
{
     a=a-1;
     return -a;
}
int main()
{
    int tc,k,n1=1;
    long long int value,life=1,lifeneeded=1;
    scanf("%d",&tc);
    while(tc--)
    {
         scanf("%d",&k);
         for(int i=0;i<k;i++)
         {
                 scanf("%lld",&value);
                 life=life+value;
                 if(life<=0)
                 {
                    lifeneeded+=func(life);
                    life=1;
                 }
         }
             printf("Scenario #%d: %lld\n",n1,lifeneeded);
         
         n1++;
         life=1;
         lifeneeded=1;
    }
return 0;
}


