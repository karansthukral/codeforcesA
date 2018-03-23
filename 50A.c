#include<stdio.h>

int main()
{
	int m, n, count=0;
	scanf("%d %d", &n, &m);

	int area;

	if((n%2==0)||(m%2==0))
		count=(m*n/2);
	else if((n%2!=0)&&(m%2!=0))
	{
		count=((m-1)/2)*n;
		count+=(n-1)/2;
	}

	printf("%d", count);
}