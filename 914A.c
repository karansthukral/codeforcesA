#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	int flag = 1;
	scanf("%d", &n);

	int i, j, tmp;
	int a[n];
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
	//printf("\n");		
	//for(i=0;i<n;i++)
	//	printf("%d ", a[i]);

	int cmp=1;
	i=n-1;
	if (a[i]!=0)
	cmp=ceil(sqrt(a[i]));

	//printf("\n%d %d %d",a[i], i, cmp);

	while((a[i]==(cmp*cmp))||a[i]==0)
	{
		i--;
		cmp=sqrt(a[i]);
		//printf("\n%d %d %d",a[i], i, cmp);
	}

		printf("\n%d", a[i]);
}