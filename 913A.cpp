#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	
	int x, y;
	x=pow(2,n);
	
	//cout<<x<<" ";
	
	y=m%x;
	
	cout<<y;
}