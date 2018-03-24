#include<iostream>
using namespace std;
int main()
{
	string s, k;
	cin>>s>>k;

	int l;
	l=s.length();
	int ans;

	int i;
	for(i=0;i<l;i++)
	{
		if(s[i]!=k[i])
			ans=1;
		else
			ans=0;
		cout<<ans;
	}


}