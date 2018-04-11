#include<iostream>
using namespace std;

int main()
{
	int a, b, h;
	cin>>a>>b;
	h=a;
	while(a>=b)
	{
		a-=b;
		h++;
		a++;
	}
	cout<<h;
}