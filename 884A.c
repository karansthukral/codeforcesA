#include<stdio.h>

int main()
{
	int n, t;
	scanf("%d %d", &n, &t);

	int a[n], to[n];
	int i;
	int total=0;
	int count=0;

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	for(i=0;i<n;i++)
		to[i]=86400-a[i];

	for(i=0;i<n;i++)
	{	
		total=total+to[i];
		if(total<t)
			count++;
	}

	printf("%d", count+1);



}