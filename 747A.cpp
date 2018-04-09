#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i, row, col;

	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			row=i;
			col=n/row;
		}
	}
	cout<<row<<" "<<col;

}