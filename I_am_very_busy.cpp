#include<stdio.h>
#include<map>
using namespace std;
int main()
{
    multimap<int,int> mymap;
    int n,final,count=1,tc;
    scanf("%d",&tc);
    int key,value;
    multimap<int,int>::iterator j;
    while(tc)
    {
      scanf("%d",&n);
      count=1;
      for(int i=0;i<n;i++)
      {
            scanf("%d",&key);
            scanf("%d",&value);
            mymap.insert(pair<int,int>(value,key));
      }
            j=mymap.begin();
            final=j->first;
            j++;
            for(;j!=mymap.end();j++)
            {
            if(j->second>=final)
            {
               count=count+1;
               final=j->first;
               }
               }
      printf("%d\n\n",count);
      tc--;
      mymap.clear();
      }         
return 0;
}
    

