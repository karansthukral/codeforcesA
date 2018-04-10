#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int m[n], i;
	for(i=0;i<n;i++)
		cin>>m[i];
	if(n==1)
	{
		if(m[0]==15)
			cout<<"DOWN";			
		else if(m[0]==0)
			cout<<"UP";
		else
			cout<<"-1";
	}
	else
	{
		if(m[n-1]==0)
			cout<<"UP";
		else if(m[n-1]==15)
			cout<<"DOWN";		
		else if(m[n-2]>m[n-1])
			cout<<"DOWN";
		else
			cout<<"UP";
	}
}