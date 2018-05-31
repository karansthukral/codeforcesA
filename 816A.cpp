#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;

	int t[3], count=0;
	t[0]=(s[0])*10+s[1]-528;
	t[1]=s[3]*10+s[4]-528;
	t[2]=s[4]*10+s[3]-528;
	//cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<endl;

	if(t[2]==t[0])
	{
		cout<<0;
		return 0;
	}

	bool check=true;

	while(check)
	{
		t[1]++;
		if(t[1]==60)
		{
			t[0]++;
			if(t[0]==24)
				t[0]=0;
			t[1]=0;		
		}

		t[2]=(t[1]/10)+((t[1]%10)*10);
		count++;
		if(t[2]==t[0])
			check=false;
	}
	cout<<count;

}