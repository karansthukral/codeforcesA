#include<stdio.h>

int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n, m;
	scanf("%d %d", &n, &m);


	int i, j;
	if(n>=m)
	{	
		j=m;
		for(i=0;i<n;i++)
		{
			printf("B");
			if(j>0)
			{
				printf("G");
				j--;
			}

		}
	}
	else
	{
		j=n;
		for(i=0;i<m;i++)
		{
			printf("G");
			if(j>0)
			{
				printf("B");
				j--;
			}

		}	
	}
}