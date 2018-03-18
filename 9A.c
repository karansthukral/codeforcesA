#include<stdio.h>

int main()
{
	int a[2];
	scanf("%d %d", &a[0], &a[1]);

	int max, pn;
	if(a[1]>=a[0])
		max=a[1];
	else
		max=a[0];

	pn=7-max;

	if(pn%2==0)
	{
		pn=pn/2;
		if(pn==3)
			printf("1/1");
		else
		printf("%d/3",pn);
	}
	else if(pn%3==0)
	{
		pn=pn/3;
		printf("%d/2",pn);
	}
	else
		printf("%d/6",pn);
}