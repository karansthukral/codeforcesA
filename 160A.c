#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	int i, j, tmp;

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]<a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}

	int count, count1, count2;
	count=0;
	count1=0;
	count2=0;
	for(i=0;i<n;i++)
		count=count+a[i];

	count=count/2;

	for(i=0;i<n;i++)
	{
		count1=count1+a[i];
		if(count1>count)
			count2++;
	}

	int cost;
	cost=n-count2;
	cost++;
	printf("%d\n", cost);

}