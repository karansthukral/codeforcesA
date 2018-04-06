#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	int i, count=0;
	for(i=0;i<n;i++)
		cin>>a[i];

	if(n==1)
	{	
		if(a[0]==1)
			cout<<"YES";
		else
			cout<<"NO";
		return 0;
	}
	for(i=0;i<n;i++)
		if(a[i]==0)
			count++;

	if(count==1)
		cout<<"YES";
	else
		cout<<"NO";

}