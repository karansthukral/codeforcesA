#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n], i, j, tmp, flag=0, rem;
	for(i=0;i<n;i++)
		cin>>a[i];

	if(n%2==0)
		flag=1;


	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}

	if(flag==1)
		rem=a[(n/2)-1];
	else
		rem=a[(n-1)/2];

	cout<<rem;


}