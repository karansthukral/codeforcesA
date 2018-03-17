#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a;
	a=n%10;
	if(a<=5)
		n=n-a;
	else
		n=n-a+10;

	printf("%d", n);
}