#include<stdio.h>
#include<math.h>
using namespace std;
long long int compute(char str[5],long long int num)
{
     int x=(int)str[0]-48,y=(int)str[1]-48,z=(int)str[3]-48;
     num=(x*10+y)*pow(10,z);
     return num;    
}
     
int main()
{
    char str[5];
    long long int num,num1,sum=0,res;
    while(1)
    {
     scanf("%s",str);
     num=compute(str,num);
     num1=num;
     if(num1==0)
       break;
     else
     {
      while(num>1)
      {
        num=num/2;
        sum=sum+1;
        }
        res=2*(num1-pow(2,sum))+1;
       printf("%lld\n",res);
       }
       num1=0;
       res=0;
       sum=0;
       }
return 0;
}

