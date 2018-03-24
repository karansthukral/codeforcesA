#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;

	int a[n];
	int i;
	for(i=0;i<n;i++)
		a[i]=i+1;

	i=0;
	while(m>=0)
	{
		m-=a[i];
		if(i!=n-1)
			i++;
		else
			i=0;
		if(m-a[i]<0)
			break;
	}

	cout<<m;
}