#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], i, min=1000000000, max=0, count=0;
	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n;i++)
	{
		if(min>=a[i])
			min=a[i];
		if(max<=a[i])
			max=a[i];
	}
	//cout<<min<<max<<endl;
	if(n<=2)
	{
		cout<<"0";
		return 0;
	}
	else
		for(i=0;i<n;i++)
			if(a[i]==max||a[i]==min)
				count++;

	count=n-count;
	cout<<count;

}