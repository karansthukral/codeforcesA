#include<stdio.h>
int main()
{
	int n, nc=0;
	scanf("%d", &n);

	int req;
	req=n-10;

	if(req==1)
		nc=4;

	else if(req<=0)
		nc=0;

	else if(req<10)
		nc=4;

	else if(req==11)
		nc=4;

	else if(req==10)
		nc=15;

	printf("\n%d", nc);
}