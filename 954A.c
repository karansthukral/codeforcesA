#include<stdio.h>
#include<string.h>
int main()
{	
	int n;
	scanf("%d", &n);

	char a[n];
	scanf("%s", a);
	
	int i, count=0, pair=0, solo=0;	

	
	i=0;
	//printf("\n%d %d %d %d",i ,n , pair, solo);

	while(n>0)
	{
		if(a[i]=='R')
		{	
			if(a[i+1]=='U')
			{
				pair++;
				n--;
				i++;
			}
			else if(a[i+1]=='R')
				solo++;
			else
				solo++;
		}
		else if(a[i]=='U')
		{
			if(a[i+1]=='R')
			{
				pair++;
				n--;
				i++;				
			}
			else if(a[i+1]=='U')
				solo++;
			else
				solo++;
		}
		n--;
		i++;
		//printf("\n%d %d %d %d",i ,n , pair, solo);
	}
	count=pair+solo;
	printf("\n%d", count);
}