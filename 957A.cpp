#include<stdio.h>

int main()
{
	int n, count=0, check=0;
	scanf("%d", &n);

	char a[n];
	scanf("%s", a);

	int i, j;
	for(i=0;i<n-1;i++)
		if((a[i]==a[i+1])&&(a[i]!='?'))
		{
			printf("No");
			return 0;
		}

	for(i=0;i<n;i++)
		if(a[i]=='?')
			count++;
	
	if(count==0)
	{
		printf("No");
		return 0;
	}

	int qm[count];

	j=0;

	for(i=0;i<n;i++)
		if(a[i]=='?')
		{
			qm[j]=i;
			j++;
		}

	//for(i=0;i<count;i++)
		//printf("%d ", qm[i]);

	for(i=0;i<n;i++)
		if(a[i]=='?')
		{
			if((i==0)||(i==n-1))
				check=2;
			else if(a[i-1]==a[i+1])
				check=2;
			else if(a[i-1]=='?')
				check=2;
			else if((a[i-1]=='?')&&(a[i-2]=='?'))
				check=2;
		}
	if(check==2)
		printf("Yes");
	else
		printf("No");

}