#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float k, n, s, p;
	cin>>k>>n>>s>>p;

	float pp, pack;

	pp=n/s;
	pp=ceil(pp);
	pack=(pp*k/p);
	pack=ceil(pack);

	int ipack;
	ipack=(int)pack;

	cout<<ipack;
}