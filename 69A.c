#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n][3];
	int i, j;
	int x, y, z;
	x=0;
	y=0;
	z=0;

	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			scanf("%d", &a[i][j]);

	for(i=0;i<n;i++)
		x=x+a[i][0];

	for(i=0;i<n;i++)
		y=y+a[i][1];

	for(i=0;i<n;i++)
		z=z+a[i][2];

	if((x==0)&&(y==0)&&(z==0))
		printf("YES");
	else
		printf("NO");
}