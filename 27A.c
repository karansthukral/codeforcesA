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
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
	int min;
	min=a[0];

	for(i=1;i<n;i++)
		if((min+1)==a[i])
			min=a[i];

	if(a[0]!=1)
		printf("1");
	else
	printf("%d",min+1);
}