#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	int i;

	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}

	/*printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);*/

	int diff[n];
	int min;
	int minval;

	for(i=0;i<n-1;i++)
		diff[i]=a[i+1]-a[i];

	diff[n-1]=a[n-1]-a[0];

	for(i=0;i<n;i++)	
		if(diff[i]<0)
			diff[i]=diff[i]*(-1);


	/*printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", diff[i]);*/

	min=diff[0];
	minval=1;
	for(i=1;i<n;i++)
		if((min>diff[i]))
		{
			min=diff[i];
			minval=i+1;
			//printf("\n%d %d", min, minval);
		}
	if(n==minval)
		printf("\n1 %d", n);
	else
		printf("\n%d %d", minval, minval+1);
}