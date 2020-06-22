#include<stdio.h>
using namespace std;
int main()
{
    int tc;
    long long int k,count=192,ans;
    scanf("%d",&tc);
    while(tc--)
    {
          scanf("%lld",&k);
          ans=(k-1)*250+192;
          printf("%lld\n",ans);
    }
return 0;
}

