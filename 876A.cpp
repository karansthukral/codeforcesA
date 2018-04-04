#include<iostream>
using namespace std;

int main()
{
	int n, a, b , c, dis=0, sum, flag=0;
	cin>>n>>a>>b>>c;

	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	else
	{
		if(a>=b)
			dis=b;
		else
			dis=a;
	}
	if(c<dis)
		flag=1;

	n-=2;
	sum=dis;
	while(n>0)
	{
		if(flag==1)
			sum+=c;
		else
			sum+=dis;
		n--;
	}
	cout<<sum;
}