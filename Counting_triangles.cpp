#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int t,res;
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lld",&t);
        res=(t*(t+2)*(t*2+1))/8;
        cout<<res<<endl;
        }
    
return 0;
}

