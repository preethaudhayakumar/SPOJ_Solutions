#include<stdio.h>
using namespace std;
int main()
{
    long long int tc,n,sum,heap=0;
    scanf("%lld",&tc);
    printf("\n");
    while(tc--)
    {
               scanf("%lld",&n);
               for(int i=0;i<n;i++)
               {
                       scanf("%lld",&sum);
                       heap=(heap%n)+(sum%n);
               }
               if(heap%n==0)
                    printf("YES\n");
               else
                   printf("NO\n");
               heap=0;
    }
return 0;
}


