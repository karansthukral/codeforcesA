#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

int main()
{
	string s, s1;
	int i, j, tmp, ca=0, cb=0, cc=0;

	cin>>s;
	s1=s;
	int n=s.size();
	//cout<<s1;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(s[j]>s[j+1])
			{
				tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
	for(i=0;i<n;i++)
	{
		if(s[i]!=s1[i])
		{
			cout<<"NO";
			return 0;
		}
		if(s[i]=='a')
			ca++;
		else if(s[i]=='b')
			cb++;
		else
			cc++;
	}		
	if((ca==cc||cb==cc)&&(cc>0&&ca>0&&cb>0))
		cout<<"YES";
	else		
		cout<<"NO";


}