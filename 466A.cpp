#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, m, a, b;
	cin>>n>>m>>a>>b;

	int check=a*n;
	int check1=0;
	do
	{
		n-=m;
		check1+=b;
	}while(n>=m);
	//cout<<"n:"<<n;
	if(b>a&&n>0)
		check1+=(n*a);
	else if(b<=a&&n>0)
		check1+=b;
	//cout<<check1<<" "<<check;

	if(check1<check)
		cout<<check1;
	else
		cout<<check;
}