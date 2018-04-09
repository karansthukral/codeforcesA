#include<iostream>
using namespace std;

int main()
{
	int n, k, time, i=0;
	cin>>n>>k;
	time=240-k;
	while((time>=0)&&(n>=0))
	{
		n--;
		i++;
		time-=(5*i);
		//cout<<"i:"<<i<<" time:"<<time<<endl;
	}
	i--;
	cout<<i;

}