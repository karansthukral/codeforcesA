#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], i, sum=0, sum1=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	for(i=0;i<n;i++)
	{
		sum1+=a[i];
		if(sum1>=(0.5*sum))
			break;
	}
	cout<<i+1;
}