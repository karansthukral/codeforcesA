#include<stdio.h>

int main()
{
	int n, k;
	scanf("%d %d",&n ,&k);

	int a[n];
	int i;

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	int crit, count=0;
	crit=a[k-1];

	for(i=0;i<n;i++)
		if((a[i]>=crit)&&(a[i]>0))
			count++;

	printf("%d", count);
}