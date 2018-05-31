#include<iostream>
using namespace std;

int main()
{
	int n, h, i;
	cin>>n>>h;

	int a[n], width=n;

	for(i=0;i<n;i++)
	{	
		cin>>a[i];
		if(a[i]>h)
			width++;
	}
	cout<<width;
}


















