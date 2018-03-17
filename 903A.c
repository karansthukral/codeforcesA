#include<stdio.h>

int main()
{
	int n, x;
	scanf("%d", &n);

	int a[n];
	int i;

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	for(i=0;i<n;i++)
	{
		if(a[i]%3==0)
			printf("YES\n");

		else if(a[i]%7==0)
			printf("YES\n");
		
		else 
		{
			x=a[i];
			while(x>0)
			{
				x=x-3;
				if(x%7==0)
				{
					printf("YES\n");
					x=0;
				}
			}
			if(x!=0)
				printf("NO\n");
		}

		/*if(a[i]%3==0)
			printf("YES");

		else if(a[i]%7==0)
			printf("YES");

		else if((a[i]%3!=0)&&(a[i]%7!=0))
		{
			while(x>0)
			{
				a[i]=a[i]-3;
				if(a[i]%7==0)
				{
					printf("YES");
					break;
				}
			}
		}
		else
			printf("NO");*/

	}

}