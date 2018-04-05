#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int num, den, i;
	if(n%2==1)
		num=floor(n/2);
	else
		num=floor(n/2)-1;

	den=n-num;

	//cout<<num<<" "<<den;

	i=2;
	while((num%i==0)&&(den%i==0))
	{
		num--;
		den++;
		i++;
	}

	cout<<num<<" "<<den;
}