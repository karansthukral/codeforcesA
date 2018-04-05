#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int max=0, min=0, sum;
	for(i=1;i<n-1;i++)
	{
		if(a[i]>a[i-1]&&a[i]>a[i+1])
			max++;
		else if(a[i]<a[i-1]&&a[i]<a[i+1])
			min++;
	}
	sum=min+max;
	cout<<sum;
}