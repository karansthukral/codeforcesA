#include<stdio.h>
#include<math.h>

int main()
{
	int y, cy;
	scanf("%d", &y);
	cy=y+1;

	int a[4];
	int i, j;
	j=10;

	for(i=4;i>0;i--)
	{
		a[i-1]=cy%j;
		cy=floor(cy/j);
	}
	//for(i=0;i<4;i++)
		//printf("%d ", a[i]);

	while((a[0]==a[1])||(a[0]==a[2])||(a[0]==a[3])||(a[1]==a[2])||(a[1]==a[3])||(a[2]==a[3]))
	{
		y++;
		cy=y;
		for(i=4;i>0;i--)
		{
			a[i-1]=cy%j;
			cy=floor(cy/j);
		}
	}
	for(i=0;i<4;i++)
		printf("%d", a[i]);
}