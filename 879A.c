#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int s[n], d[n];
	int i;

	for(i=0;i<n;i++)
		scanf("%d %d", &s[i], &d[i]);

	int min;

	min=s[0];

	for(i=1;i<n;i++)
	{
		//printf("\n%d %d %d", s[i], d[i], min);
		while(s[i]<min)
			s[i]+=d[i];
		if(s[i]==min)
			s[i]+=d[i];
		min=s[i];
		//printf("\n%d %d %d", s[i], d[i], min);
	}
	printf("\n%d", min);



}