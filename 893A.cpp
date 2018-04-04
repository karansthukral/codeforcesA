#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n], i;

	for(i=0;i<n;i++)
		cin>>a[i];

	int flag[3]={1,1,0};
	if(a[0]!=1&&a[0]!=2)
	{
		cout<<"NO";
		return 0;
	}

	for(i=0;i<n;i++)
	{
		if(flag[0]==1&&flag[1]==1)
		{
			if(a[i]==1)
			{
				flag[1]=0;
				flag[2]=1;

			}
			else if(a[i]==2)
			{
				flag[0]=0;
				flag[2]=1;
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		else if(flag[1]==1&&flag[2]==1)
		{
			if(a[i]==2)
			{
				flag[0]=1;
				flag[2]=0;

			}
			else if(a[i]==3)
			{
				flag[0]=1;
				flag[1]=0;
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}		
		else if(flag[0]==1&&flag[2]==1)
		{
			if(a[i]==1)
			{
				flag[1]=1;
				flag[2]=0;

			}
			else if(a[i]==3)
			{
				flag[1]=1;
				flag[0]=0;
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		//cout<<flag[0]<<" "<<flag[1]<<" "<<flag[2]<<"\n";	
	}

	cout<<"YES";

}