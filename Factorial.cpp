#include<stdio.h>
#include<iostream>
using namespace std;
void compute(int num)
{
     int x=0;
     while(num>=5)
     {
              x+=num/5;
              num=num/5;
     }
     printf("%d\n",x);
}
int main()
{
    int tc,num;
    scanf("%d",&tc);
    while(tc>0)
    {
             scanf("%d",&num);
             compute(num);
             tc--;
    }
return 0;
}

