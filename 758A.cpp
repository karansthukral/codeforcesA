#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n], i, max=0, count=0, sum=0;
	for(i=0;i<n;i++)
	{	
		cin>>a[i];
		if(max<=a[i])
			max=a[i];
	}
	for(i=0;i<n;i++)
		sum+=(max-a[i]);
	cout<<sum;

}