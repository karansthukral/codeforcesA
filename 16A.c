#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	char a[n][m];
	int i, j, flag=0;

	for(i=0;i<n;i++)
			scanf("%s", a[i]);

	for(i=0;i<n;i++)
		for(j=1;j<m;j++)
			if(a[i][j]!=a[i][0])
				flag=1;

	for(i=1;i<n;i++)
		if(a[i-1][0]==a[i][0])
			flag=1;


	if(flag==0)
		printf("YES");
	else
		printf("NO");
}