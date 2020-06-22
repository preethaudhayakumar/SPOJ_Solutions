#include<stdio.h>
#include<set>
using namespace std;
int main()
{
    int tc,key,n,value,tc1;
    set<int> myset;
    set<int>::iterator i;
    scanf("%d",&tc);
    tc1=tc;
    while(tc--)
    {
         scanf("%d",&key);
         myset.insert(key);
         scanf("%d",&n);
         for(int j=0;j<n;j++)
         {
              scanf("%d",&value);
              myset.insert(value);
              }
         
}
         printf("%d\n",myset.size()-tc1);
     
return 0;
}

          


