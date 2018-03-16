#include<stdio.h>

int main()
{
	int ct, ot;
	scanf("%d %d", &ct, &ot);
	if(ot==1 && ct>0)
		printf("No");
	else
	{
		ot=ot-1;
		while(ot!=0 && ct>0)
		{
			ot--;
			ct--;
		}

		/*printf("\n%d",ot);
		printf("\n%d",ct);*/
	
		if(ot==0)
		{
			if(ct%2==0)
				printf("Yes");

			else 
				printf("No");
		}
		else
			printf("No");
	}
}

