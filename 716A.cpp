#include<iostream>
using namespace std;

int main()
{
	int n, c;
	cin>>n>>c;

	int t[n], i, count=1;
	for(i=0;i<n;i++)
		cin>>t[i];

	for(i=1;i<n;i++)
	{
		if(t[i]-t[i-1]<=c)
			count++;
		else
			count=1;
		//cout<<count<<endl;
	}
	cout<<count;

}