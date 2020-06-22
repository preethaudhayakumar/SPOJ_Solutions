#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;
int compute(char b[50])
{
    int l=strlen(b);
    for(int i=0;i<l;i++)
    {
       if(isalpha(b[i]))
           return -1;
    }
    return 1;
}
void compute1(int num[3])
{
     if(num[0]==-1)
         num[0]=num[2]-num[1];
     else if(num[1]==-1)
         num[1]=num[2]-num[0];
     else
         num[2]=num[0]+num[1];
     printf("%d + %d = %d\n",num[0],num[1],num[2]);
}
int main()
{
    int tc,num[3],j=0,k=0;
    scanf("%d",&tc);
    char s1[50],s2[50],s3[50],s4[50],s5[50];
    while(tc>0)
    {
       cin>>s1>>s2>>s3>>s4>>s5;
       num[0]=compute(s1);
       if(num[0]!=-1)
          num[0]=atoi(s1);
       num[1]=compute(s3);
        if(num[1]!=-1)
          num[1]=atoi(s3);
       
       num[2]=compute(s5);
        if(num[2]!=-1)
          num[2]=atoi(s5);
         compute1(num);
         tc--;
}
return 0;
}

