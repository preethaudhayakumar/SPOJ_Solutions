#include<stdio.h>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    int tc,n,k,value1,value2,count=0,n1=1;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d",&n,&k);
        set<int>myset1;
        set<int>myset2;
        set<int>::iterator i,j;
        for(int i=0;i<k;i++)
        {
                scanf("%d %d",&value1,&value2);
                myset1.insert(value1);
                myset2.insert(value2);
        }
        for(i=myset1.begin();i!=myset1.end();i++)
        {
           for(j=myset2.begin();j!=myset2.end();j++)
           {
               if(*j==*i)
               {
                   count=1;
                   break;
               }
               else if(*j>*i)
                    break;
           }
        }
        if(count==0)
           printf("Scenario #%d: spying\n",n1);
        else
           printf("Scenario #%d: spied\n",n1);
        n1++;
        count=0;
        }
return 0;
}     

