#include<iostream>
using namespace std;

int main()
{
	int n, i, one=0, flag=0;
	cin>>n;

	string s;
	cin>>s;
	if(n==1)
	{
		if(s[0]=='0')
			cout<<"NO";
		else
			cout<<"YES";
		return 0;
	}
	if(n==2)
	{
		if((s[0]=='1'&&s[1]=='1')||(s[0]=='0'&&s[1]=='0'))
			cout<<"NO";
		else
			cout<<"YES";
		return 0;
	}
	if(s[0]=='0'&&s[1]=='0')
	{
		cout<<"NO";
		return 0;
	}
	if(s[n-1]=='0'&&s[n-2]=='0')
	{
		cout<<"NO";
		return 0;
	}
	for(i=0;i<n-1;i++)
	{
		//cout<<s[i]<<" "<<s[i+1]<<"  ";
		if(s[i]=='1'&&s[i+1]=='1')
		{
			flag=1;
			//cout<<flag;
			break;
		}
	}
		for(i=0;i<n-2;i++)
		if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0')
		{
			flag=1;
			break;
		}
	if(flag==1)
		cout<<"NO";
	else
		cout<<"YES";
}