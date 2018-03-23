#include<stdio.h>
#include<math.h>

int main()
{
	int x, y, sx, sy, pos, flag=0;
	scanf("%d %d", &x, &y);

	if((x==0)||(y==0))
	{
		printf("black");
		return 0;
	}

	if(x>0&&y>0)
		flag=1;
	else if(x>0&&y<0)
		flag=2;
	else if(x<0&&y<0)
		flag=3;
	else 
		flag=4;

	float rad, zc;

	sx=x*x;
	sy=y*y;

	rad=(float)sqrt(sx+sy);
	zc=floor(rad);
	if((rad/zc)==1)
	{
		printf("black");
		return 0;
	}

	if((flag==1)||(flag==3))
	{
		pos=(int)floor(rad);
		if(pos%2==0)
			printf("black");
		else
			printf("white");
	}
	else if((flag==2)||(flag==4))
	{
		pos=(int)floor(rad);
		if(pos%2==0)
			printf("white");
		else
			printf("black");
	}
}