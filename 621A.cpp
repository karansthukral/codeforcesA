#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int a[n];
	int i, odd=0, flag=0, min=1000000000;
	long long int sum=0;
	for(i=0;i<n;i++)
	{	
		cin>>a[i];
		if(a[i]%2==1)
		{
			odd++;
			if(min>a[i])
				min=a[i];
		}
	}
	if(odd%2==0)
		flag=1;

	for(i=0;i<n;i++)
			sum+=a[i];

	if(flag==0)
		sum-=min;

	cout<<sum;
}