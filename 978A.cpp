#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int i, j, k, a[n], count=0;

	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				a[i]=0;
		}

		/*for(k=0;k<n;k++)
			cout<<a[k]<<" ";

		cout<<endl;*/
	}

	for(i=0;i<n;i++)
		if(a[i]!=0)
			count++;

	int b[count];
	j=0;

	for(i=0;i<n;i++)
		if(a[i]!=0)
		{	
			b[j]=a[i];
			j++;
		}
	cout<<count<<endl;
	for(i=0;i<count;i++)
		cout<<b[i]<<" ";

}