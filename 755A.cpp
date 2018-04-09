#include<iostream>
using namespace std;

int main()
{
	int m=1, n, result, i, count;
	cin>>n;

	while(true)
	{
		count=0;
		result=(n*m)+1;
		for(i=1;i<=result;i++)
			if(result%i==0)
				count++;
		if(count<=2)
			m++;
		else
			break;
	}
	cout<<m;


}