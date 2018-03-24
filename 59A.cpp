#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int l;
	l=s.length();

	int i;
	int cap=0, low=0;

	for(i=0;i<l;i++)
	{
		if(s[i]<=90)
			cap++;
		else
			low++;
	}

	if(cap<=low)
	{	
		for(i=0;i<l;i++)
			if(s[i]<=90)
				s[i]+=32;
	}
	else
	{	for(i=0;i<l;i++)
			if(s[i]>90)
				s[i]-=32;
	}
	cout<<s;
}