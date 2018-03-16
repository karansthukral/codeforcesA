#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int i,j,tmp;
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	/*
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	*/
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
					tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
			}
	int count=0;
	for(i=0;i<n;i++)
		if(a[i]<0||a[i]==0)
			count++;
	//printf("%d\n", count);

	int b[n-count],c[count],sum;
	for(i=0;i<n-count;i++)
		b[i]=a[i+count];
	for(i=0;i<count;i++)
		c[i]=a[i];	
	int s1=0;
	int s2=0;
	for(i=0;i<n-count;i++)
		s1=s1+b[i];
	for(i=0;i<count;i++)
		s2=s2+c[i];

	/*for(i=0;i<n-count;i++)
		printf("x%d ",b[i]);
	for(i=0;i<count;i++)
		printf("y%d ",c[i]);
	*/

	sum=s1-s2;
	printf("%d", sum);
}