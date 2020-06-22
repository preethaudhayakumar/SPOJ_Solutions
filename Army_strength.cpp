#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int tc,a,b,max1=0,max2=0;
    scanf("%d",&tc);
    printf("\n");
    while(tc--)
    {
    scanf("%d%d",&a,&b);
    int count1[a+1];
    int count2[b+1];
    for(int i=0;i<a;i++)
    {
            scanf("%d",&count1[i]);
            
    }
    for(int j=0;j<b;j++)
    {
            scanf("%d",&count2[j]);
     }
     sort(count1,count1+a);
     sort(count2,count2+b);
     max1=count1[a-1];
     max2=count2[b-1];
     if(max1>=max2)
        printf("Godzilla\n");
     else if(max2>max1)
        printf("MechaGodzilla\n");
     else
        printf("Uncertain\n");
        }
return 0;
}

