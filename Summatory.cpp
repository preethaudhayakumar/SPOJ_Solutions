#include<iostream>
using namespace std;
long long int a[1000004],sum[1000004];
int main()
{
    a[0]=0;
    sum[0]=0;
    for(unsigned long long int i=1;i<1000001;i++)
    {
             a[i]=a[i-1]+(i*i*i)%1000000003;
             sum[i]=(sum[i-1]+a[i])%1000000003;
    }
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
              long int n;
              scanf("%ld",&n);
              printf("%ld\n",sum[n]);
    }
}
 
 
