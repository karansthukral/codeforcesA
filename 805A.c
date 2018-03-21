#include<stdio.h>

int main()
{
	int l, r;
	scanf("%d %d", &l, &r);

	int i, j, tmp=0, max=0, count=0;

	if(l==r)
	{
		printf("%d", l);
		return 0;
	}
	if(((r-l)>10000)||r>10000000)
	{	
		printf("2");
		return 0;
	}

	for(j=2;j<r+1;j++)
	{	
		for(i=l;i<r+1;i++)
		{
			if(i%j==0)
				count++;
		}
		if(max<count)
		{
			max=count;
			tmp=j;
		}
		count=0;
	}


	printf("%d", tmp);	

}