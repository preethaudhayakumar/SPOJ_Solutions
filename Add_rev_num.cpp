#include<iostream>
using namespace std;
int reverse(int a,int first)
{
	while(a>0)
	{
		first=(first*10)+a%10;
		a=a/10;
	}
	return first;
}
int main()
{
	int a=0,b=0,first=0,second=0,third=0,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<endl;
	cin>>a;
	cin>>b;
	first=reverse(a,first);
	second=reverse(b,second);
	int result=first+second;
	third=reverse(result,third);
	cout<<third<<endl;
	first=second=third=0;

	}
return 0;

}

