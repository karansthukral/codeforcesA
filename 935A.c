#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int i, count=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			count++;
	}
	printf("%d", count);

}