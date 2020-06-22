#include<stdio.h>
using namespace std;
int main()
{
    long long int num,sum,sum1=0;
    int tc,gen;
    scanf("%d",&tc);
    while(tc--)
    {
     scanf("%d",&gen);
     scanf("%lld",&num);
     num=num-1;
     while(num>=1)
     {
          sum=num%2;
          num=num/2;
          sum1=sum1^sum;
          }
          if(sum1==0)
              printf("Male\n");
          else
              printf("Female\n");
              sum1=0;
              sum=0;
              }
return 0;
}

