#include<iostream>
using namespace std;
int main()
{	
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int ball, a[3], s[3][2];
	cin>>ball;

	int i;

	for(i=0;i<3;i++)
		cin>>s[i][0]>>s[i][1];

	for(i=0;i<3;i++)
	{	
		if(s[i][0]==ball)
			ball=s[i][1];
		else if(s[i][1]==ball)
			ball=s[i][0];
	}

	cout<<ball;
}
		



