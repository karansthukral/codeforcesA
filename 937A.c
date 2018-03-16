#include<stdio.h>

int main()
{
	int n, i, j, tmp;
	scanf("%d", &n);

	int a[n];
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	/*printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);*/



	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
	int count=0;
	tmp=0;

	for(i=0;i<n;i++)
		if(a[i]>0 && tmp!=a[i])
		{
			count++;
			tmp=a[i];
		}
	printf("%d",count);
}