#include<iostream>
using namespace std;

int main()
{
	int x[3], i, j, tmp, min;
	cin>>x[0]>>x[1]>>x[2];

	for(i=0;i<2;i++)
		for(j=0;j<2-i;j++)
			if(x[j]>=x[j+1])
			{
				tmp=x[j];
				x[j]=x[j+1];
				x[j+1]=tmp;
			}
	//cout<<x[0]<<x[1]<<x[2];
	min=x[2]-x[0];
	for(i=x[0];i<=x[2];i++)
	{
		if(i<=x[1])
			tmp=(i-x[0])+(x[1]-i)+(x[2]-i);
		else
			tmp=(i-x[0])+(i-x[1])+(x[2]-i);
		if((tmp<=min)&&(tmp>0))
			min=tmp;
		//cout<<"i:"<<i<<" min:"<<min<<endl;
	}
	cout<<min;



}