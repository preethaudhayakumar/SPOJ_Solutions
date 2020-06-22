#include<stdio.h>
#include<map>
#include<set>
using namespace std;
int main()
{
    int tc,n,k,key,value,n1=1;
    bool count=true;
    scanf("%d",&tc);
    while(tc--)
    {
         map<int,set<int> > mymap;
         scanf("%d %d",&n,&k);
         for(int i=0;i<k;i++)
         {
             scanf("%d %d",&key,&value);
             pair<set<int>::iterator,bool> rest=mymap[key].insert(value);
             if(rest.second==false)
                  count=false;
         }
         if(count)
             printf("Scenario #%d: possible\n",n1);
         else
             printf("Scenario #%d: impossible\n",n1);
         n1++;
         count=true;
    }
return 0;
}

