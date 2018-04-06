#include<iostream>
using namespace std;
int main()
{
	long long int n, x;
	cin>>n>>x;
	long long int num, i;
	char s;
	long long int count=x;
	long long int dischd=0;
	for(i=0;i<n;i++)
	{	
		cin>>s;		
		cin>>num;
		if(s=='+')
			count+=num;
		else if((s=='-')&&(num<=count))
			count-=num;
		else
			dischd++;
	}


	cout<<count<<" "<<dischd;
	return 0;
}