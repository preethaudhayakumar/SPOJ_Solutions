#include<stdio.h>
using namespace std;
long long int sort(int arr[ ],int p,int q,int r)
{
     int i=p;
     int j=q;
     int k=p;
     int temp[r+1];
     long long int count=0;
     while((i<=q-1) && (j<=r))
     { 
         if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
         else
         {
             temp[k++]=arr[j++];
             count=count+(q-i);
             }
     }
     while(i<=q-1)
         temp[k++]=arr[i++];
     while(j<=r)
         temp[k++]=arr[j++];
    for(i=p;i<=r;i++)
       arr[i]=temp[i];
   return count; 
}       
long long int partition(int arr[ ],int p,int r)
{
    long long int count=0;
     if(p<r)
     {
      int q=(p+r)/2;
      count=partition(arr,p,q);
      count+=partition(arr,q+1,r);
      count=count+sort(arr,p,q+1,r);
      }
      return count;
}
int main()
{
    int tc,n;
    long long int count1;
    scanf("%d",&tc);
    printf("\n");
    while(tc--)
    {
          scanf("%d",&n);
          int arr[n+1];
          for(int i=0;i<n;i++)
             scanf("%d",&arr[i]);
             printf("\n");
          count1=partition(arr,0,n-1);
          printf("%lld\n\n",count1);
          count1=0;
    }
    
return 0;
}

