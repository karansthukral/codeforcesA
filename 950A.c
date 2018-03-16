#include<stdio.h>

int main()
{
	int l, r, a, tmp=0;
	scanf("%d %d %d", &l, &r, &a);

	int total=0;

	if((l==0 && a==0)|| (r==0 && a==0))
		total=0;

	else if((l==0)&&(r==0))
	{
		if(a%2==0)
			total=a;
		else
			total=a-1;
	}

	else if(l==0)
	{
		if(r>=a)
			total=2*a;
		else
		{
			total=2*r;
			tmp=a-r;
			a=a-tmp;
			if(tmp%2==0)
				total=total+a;
			else
				total=total+a-1;
		}
	}
	
	else if(r==0)
	{
		if(l>=a)
			total=2*a;
		else
		{
			total=2*l;
			tmp=a-l;
			a=a-tmp;
			if(tmp%2==0)
				total=total+a;
			else
				total=total+a-1;
		}
	}	

	else if(l>r)
	{
		if((r+a)<=l)
			total=2*(r+a);

		else if((r+a)>l)
		{
			tmp=l-r;
			total=(2*l);
			a=a-tmp;
			if(a%2==0)
				total=total+a;
			else
				total=total+a-1;
		}
	}

	else if(r>l)
	{
		if((l+a)<=r)
			total=2*(l+a);

		else if((l+a)>r)
		{
			tmp=r-l;
			total=(2*r);
			a=a-tmp;
			if(a%2==0)
				total=total+a;
			else
				total=total+a-1;
		}
	}

	else
	{
		total=2*r;
		if(a%2==0)
			total=total+a;
		else
			total=total+a-1;
	}
	printf("%d", total);
}