#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s;
	int len, i, j=0, count=0;
	cin>>s;
	len=s.length();
	char a[len/2], b[len/2];
	if(len%2==0)
	{
		for(i=0;i<(len/2);i++)
			a[i]=s[i];
		for(i=len-1;i>=(len/2);i--)
		{
			b[j]=s[i];
			j++;
		}
		for(i=0;i<len/2;i++)
		{
			if(a[i]!=b[i])
				count++;
			//cout<<a[i]<<" "<<b[i]<<" "<<count<<endl;
		}
	}
	else
	{
		j=0;
		for(i=0;i<((len-1)/2);i++)
			a[i]=s[i];
		for(i=len-1;i>=((len+1)/2);i--)
		{
			b[j]=s[i];
			j++;
		}
		for(i=0;i<len/2;i++)
		{
			if(a[i]!=b[i])
				count++;
			//cout<<a[i]<<" "<<b[i]<<" "<<count<<endl;
		}

	}

	//cout<<a<<" "<<b<<endl;
	if(count==1)
		cout<<"YES"<<endl;
	else if(count==0&&len%2!=0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	/*for(i=0;i<len/2;i++)
		cout<<b[i];
	cout<<"\n";
	for(i=0;i<len/2;i++)
		cout<<a[i];*/
	//cout<<count;
}