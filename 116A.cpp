#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int en[n], ex[n], i;
	for(i=0;i<n;i++)
		cin>>ex[i]>>en[i];

	int cap[n], count=0, max=0;
	
	for(i=0;i<n;i++)
	{
		count+=(en[i]-ex[i]);
		cap[i]=count;
	}

	for(i=0;i<n;i++)
		if(max<=cap[i])
			max=cap[i];

	cout<<max;


}