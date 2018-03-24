#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;

	int l= a.length();
	int i, count=1;

	for(i=0;i<l-1;i++)
	{
		if(a[i]==a[i+1])
			count++;
		else 
			count=1;
		//cout<<" "<<count;
		if(count>=7)
		{
			cout<<"YES";
			return 0;
		}
	}
	if((i=l-2)&&(count>=6)&&a[i]==a[i+1])
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
}
