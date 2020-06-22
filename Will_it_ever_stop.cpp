#include<stdio.h>

using namespace std;

int main()
{
    long long int n,count,a;
    scanf("%lld",&n);
    a=n-1;
    count=(n&a); 
    if(count==0)
       printf("TAK");
    else
       printf("NIE");
return 0;
}

