#include<iostream>
using namespace std;
int main()
{
	int n, k, count=1, max=0;
	string s;

	cin>>n>>k>>s;

	int i, j, tmp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(s[j]>s[j+1])
			{
				tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}

		//cout<<s<<"\n";

	for(i=0;i<n-1;i++)
		if(s[i]!=s[i+1])
			count++;
	//cout<<count<<"\n";

	int a[count];
	j=0;
	for(i=0;i<count;i++)
	{
		a[i]=1;
		//cout<<a[j]<<" ";
	}
	//cout<<"\n";

	for(i=0;i<n-1;i++)
	{	
		if(s[i]==s[i+1])
			a[j]++;
		else
			j++;
		//cout<<j<<" "<<a[j]<<"\n";
	}
	//cout<<"\n";
	
	/*for(i=0;i<count;i++)
		cout<<a[i]<<" ";*/ 

	for(i=0;i<count;i++)
	{
		if(max<=a[i])
			max=a[i];
	}
	//cout<<"\n"<<max;

	float x;
	x=((float)max/(float)k);
	//cout<<"\n"<<x;

	if(x>1)
		cout<<"NO";
	else
		cout<<"YES";


}



