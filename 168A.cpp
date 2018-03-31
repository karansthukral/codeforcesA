#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, x, y;
	cin>>n>>x>>y;

	float con, clone;

	con=(float)x/(float)n;
	con*=100;

	if(con>=(float)y)
		clone=0;

	else
	{	
		clone=ceil((float)n*y/100);
		//cout<<clone;
		clone-=x;
	}

	cout<<clone;
}