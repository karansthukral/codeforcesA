#include<iostream>
using namespace std;

int main()
{
	int k;
	cin>>k;

	int a[k];
	int i;
	for(i=0;i<k;i++)
		cin>>a[i];

	int max=0, rej;

	for(i=0;i<k;i++)
		if(max<=a[i])
			max=a[i];
	
	if(max>25)
		rej=max-25;
	else
		rej=0;

	cout<<rej;


}