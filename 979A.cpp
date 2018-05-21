#include<iostream>
using namespace std;

int main()
{
	long long int n, cut;
	cin>>n;

	n++;

	if(n-1==0)
		cut=0;
	else if(n%2==0)
		cut=n/2;
	else
		cut=n;

	cout<<cut;
}