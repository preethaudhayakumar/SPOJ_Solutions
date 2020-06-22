#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,value,count;
    vector<int> myvect;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
            scanf("%d",&value);
            myvect.push_back(value);
            }
    sort(myvect.begin(),myvect.end());
    for(int i=0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
                int x=myvect[j]-myvect[i];
                if(x==k)
                        count=count+1;
                else if(x<k)
                        continue;
                else
                     break;
                     }
                     }
      printf("%d\n",count);
return 0;
}

