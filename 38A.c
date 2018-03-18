#include<stdio.h>

int main()
{
	int n, a, b, m;
	scanf("%d", &n);
	int x[150];

	int i, j, tmp;
	for(i=1;i<n;i++)
		scanf("%d", &x[i]);

	scanf("%d %d", &a, &b);
	
	int rise;
	rise=b-a;

	int count=0;

	for(i=a;i<b;i++)
	{
		count=count+x[i];
	}

	//for(i=0;i<n-1;i++)
		//printf("%d ", x[i]);

	printf("\n%d", count);
}