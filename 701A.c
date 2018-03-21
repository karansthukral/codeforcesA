#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int m;
	m=n/2;

	int a[n],s[n],flag[n];
	int i, j, tmp, sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		s[i]=i+1;
		sum=sum+a[i];
		flag[i]=0;
	}
	/*printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", s[i]);*/

	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;

				tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
	/*printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", s[i]);*/
	sum=sum/m;
	tmp=1;

	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if((flag[i]==0)&&(flag[j]==0))
				if((a[i]+a[j])==sum)
				{
					flag[i]=tmp;
					flag[j]=tmp;
					tmp++;
				}
	tmp=1;
	/*printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);

	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", s[i]);

	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", flag[i]);*/

	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if((flag[i]==tmp)&&(flag[j]==tmp))
			{	
				printf("\n%d %d", s[i], s[j]);
				tmp++;
			}
}
