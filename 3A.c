#include<stdio.h>

int main()
{
	int ns, ne;
	char c[2];
	scanf("%c%d ", &c[0], &ns);
	scanf("%c%d", &c[1], &ne);

	//printf("%d\n", ns);
	//printf("%d\n", ne);

	int s[2], e[2];

	if(c[0]=='a')
		s[0]=1;
	else if(c[0]=='b')
		s[0]=2;
	else if(c[0]=='c')
		s[0]=3;
	else if(c[0]=='d')
		s[0]=4;
	else if(c[0]=='e')
		s[0]=5;	
	else if(c[0]=='f')
		s[0]=6;
	else if(c[0]=='g')
		s[0]=7;
	else
		s[0]=8;

	s[1]=ns;

	if(c[1]=='a')
		e[0]=1;
	else if(c[1]=='b')
		e[0]=2;
	else if(c[1]=='c')
		e[0]=3;
	else if(c[1]=='d')
		e[0]=4;
	else if(c[1]=='e')
		e[0]=5;	
	else if(c[1]=='f')
		e[0]=6;
	else if(c[1]=='g')
		e[0]=7;
	else
		e[0]=8;

	e[1]=ne;

	int i, j;
	int moves=0;
	int moves1=0;
	int moves2=0;
	int tmoves=0;

	if((ne==ns)&&(c[0]==c[1]))
	{
		printf("%d", moves);
	}

	if((e[0]==s[0])&&(e[1]>s[1]))
	{
		moves=e[1]-s[1];
		printf("%d\n", moves);
		for(i=0;i<moves;i++)
			printf("U\n");
	}
	else if((e[0]==s[0])&&(e[1]<s[1]))
	{
		moves=s[1]-e[1];
		printf("%d\n", moves);
		for(i=0;i<moves;i++)
			printf("D\n");		
	}
	else if((e[1]==s[1])&&(e[0]>s[0]))
	{
		moves=e[0]-s[0];
		printf("%d\n", moves);
		for(i=0;i<moves;i++)
			printf("R\n");		
	}
	else if((e[1]==s[1])&&(e[0]<s[0]))
	{
		moves=s[0]-e[0];
		printf("%d\n", moves);
		for(i=0;i<moves;i++)
			printf("L\n");		
	}
	else if((s[0]!=e[0])&&(s[1]!=e[1]))
	{
		if((e[0]>s[0])&&(e[1]>s[1]))
		{
			if((e[0]-s[0])<=(e[1]-s[1]))
			{
				while(s[0]!=e[0])
				{
					s[0]++;
					s[1]++;
					moves++;
				}
				while(s[1]!=e[1])
				{
					s[1]++;
					moves1++;
				}
			}
			else
			{
				while(s[1]!=e[1])
				{
					s[0]++;
					s[1]++;
					moves++;
				}
				while(s[0]!=e[0])
				{
					s[0]++;
					moves2++;
				}
			}
		tmoves=moves+moves1+moves2;
		printf("%d\n", tmoves);
		for(i=0;i<moves;i++)
			printf("RU\n");
		for(i=0;i<moves1;i++)
			printf("U\n");
		for(i=0;i<moves2;i++)
			printf("R\n");
		}
		if((e[0]>s[0])&&(e[1]<s[1]))
		{
			if((e[0]-s[0])<=(s[1]-e[1]))
			{
				while(s[0]!=e[0])
				{
					s[0]++;
					s[1]--;
					moves++;
				}
				while(s[1]!=e[1])
				{
					s[1]--;
					moves1++;
				}
			}
			else
			{
				while(s[1]!=e[1])
				{
					s[0]++;
					s[1]--;
					moves++;
				}
				while(s[0]!=e[0])
				{
					s[0]++;
					moves2++;
				}
			}
		tmoves=moves+moves1+moves2;
		printf("%d\n", tmoves);
		for(i=0;i<moves;i++)
			printf("RD\n");
		for(i=0;i<moves1;i++)
			printf("D\n");
		for(i=0;i<moves2;i++)
			printf("R\n");
		}
		if((e[0]<s[0])&&(e[1]<s[1]))
		{
			if((s[0]-e[0])<=(s[1]-e[1]))
			{
				while(s[0]!=e[0])
				{
					s[0]--;
					s[1]--;
					moves++;
				}
				while(s[1]!=e[1])
				{
					s[1]--;
					moves1++;
				}
			}
			else
			{
				while(s[1]!=e[1])
				{
					s[0]--;
					s[1]--;
					moves++;
				}
				while(s[0]!=e[0])
				{
					s[0]--;
					moves2++;
				}
			}
		tmoves=moves+moves1+moves2;
		printf("%d\n", tmoves);
		for(i=0;i<moves;i++)
			printf("LD\n");
		for(i=0;i<moves1;i++)
			printf("D\n");
		for(i=0;i<moves2;i++)
			printf("L\n");
		}
		if((e[0]<s[0])&&(e[1]>s[1]))
		{
			if((s[0]-e[0])<=(e[1]-s[1]))
			{
				while(s[0]!=e[0])
				{
					s[0]--;
					s[1]++;
					moves++;
				}
				while(s[1]!=e[1])
				{
					s[1]++;
					moves1++;
				}
			}
			else
			{
				while(s[1]!=e[1])
				{
					s[0]--;
					s[1]++;
					moves++;
				}
				while(s[0]!=e[0])
				{
					s[0]--;
					moves2++;
				}
			}
		tmoves=moves+moves1+moves2;
		printf("%d\n", tmoves);
		for(i=0;i<moves;i++)
			printf("LU\n");
		for(i=0;i<moves1;i++)
			printf("U\n");
		for(i=0;i<moves2;i++)
			printf("L\n");
		}
	
	}
}
