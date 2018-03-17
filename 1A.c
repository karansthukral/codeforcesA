#include<stdio.h>

int main()
{
	long int n, m, a;
	scanf("%ld %ld %ld", &n, &m, &a);

	long double l, b;
	long double result;

	if(n%a==0)
		l=n/a;
	else
		l=(n/a)+1;

	if(m%a==0)
		b=m/a;
	else
		b=(m/a)+1;	

	result=l*b;

	printf("%.0Lf\n", result);
}