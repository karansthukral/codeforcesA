#include<iostream>
using namespace std;

int main()
{
	int n, w;
	cin>>n;
	int min, max;

	if(n>=7)
	{
		w=n/7;
		min=w*2;
		n=n-(w*7);
		if(n==0)
			max=min;
		else if(n==1)
			max=min+1;
		else if(n==6)
		{
			max=min+2;
			min++;
		}
		else if(n>=2)
			max=min+2;
	}
	else
	{
		if(n==1)
		{
			max=1;
			min=0;
		}
		else if(n==2)
		{
			max=2;
			min=0;
		}
		else if(n>2&&n<6)
		{
			max=2;
			min=0;
		}
		else
		{
			max=2;
			min=1;
		}
	}
	cout<<min<<" "<<max;
}









