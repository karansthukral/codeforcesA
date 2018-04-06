#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;

	int a[n], b[m], i, j, tmp, min=1001;
	for(i=0;i<m;i++)
		cin>>b[i];

	for(i=0;i<n;i++)
		a[i]=0;

	for(i=0;i<m;i++)
		a[b[i]-1]++;

	for(i=0;i<n;i++)
			if(min>a[i])
				min=a[i];

	cout<<min;
}