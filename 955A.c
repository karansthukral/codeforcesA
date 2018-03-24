#include<stdio.h>
#include<math.h>

int main()
{
	int hh, mm;
	scanf("%d %d", &hh, &mm);

	int h, d, c, n;
	scanf("%d %d %d %d", &h, &d, &c, &n);

	int dtime=0, wh=0;


	if(hh<20)
	{
		dtime=((19-hh)*60)+(60-mm);
	}
	else
		dtime=0;

	float wcost, ccost, a, b;

	wh=((dtime)*d)+h;

	a=(float)ceil((float)h/(float)n);
	b=(float)ceil((float)wh/(float)n);

	wcost=(float)b*c*0.8;
	ccost=(float)a*c;

	printf("\n%f %f %f", wcost, ccost, a);

	if(hh>=20)
	{
		wcost=(float)ceil((float)h/(float)n)*c*0.8;
		printf("\n%f", wcost);
		return 0;
	}

	if(wcost<=ccost)
		printf("\n%f", wcost);
	else
		printf("\n%f", ccost);


}