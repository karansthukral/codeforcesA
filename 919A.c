#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	float a[n], b[n];
 	float tmp;
	int i, j;
	for(i=0;i<n;i++)
		scanf("%f %f", &a[i], &b[i]);
	
	float cost[n];
	for(i=0;i<n;i++)
		cost[i]=a[i]/b[i];
	
	/*for(i=0;i<n;i++)
	{
		printf("%f ", cost[i]);	
	}
	printf("\n");*/

	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(cost[j]>cost[j+1])
			{
				tmp=cost[j];
				cost[j]=cost[j+1];
				cost[j+1]=tmp;
			}
	/*for(i=0;i<n;i++)
	{
		printf("%f ", a[i]);
	}
	printf("\n");	
	for(i=0;i<n;i++)
	{
		printf("%f ", b[i]);
	}
	printf("\n");
		for(i=0;i<n;i++)
	{
		printf("%f ", cost[i]);	
	}
	printf("\n");*/

	float price;
	price=cost[0]*m;


	printf("\n%f", price);

}