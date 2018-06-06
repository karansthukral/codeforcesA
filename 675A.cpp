#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	if(b==a)
	{
		cout<<"YES";
		return 0;
	}
	else if((a==0&&c==0)||(c==0))
	{
		cout<<"NO";
		return 0;
	}
	else if(b<a&&c>0)
	{
		cout<<"NO";
		return 0;
	}
	else if(b>a&&c<0)
	{
		cout<<"NO";
		return 0;		
	}

	b-=a;
	if(b%c==0)
		cout<<"YES";
	else
		cout<<"NO";

}