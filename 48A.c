#include<stdio.h>
#include<string.h>

int main()
{
	char f[10];
	char m[10];
	char s[10];


	scanf("%s", f);
	scanf("%s", m);
	scanf("%s", s);

	int cmp[3];
	cmp[0]=strcmp(f, m);
	cmp[1]=strcmp(m, s);
	cmp[2]=strcmp(s, f);

	//printf("%d %d %d", cmp[0], cmp[1], cmp[2]);

	if(cmp[0]==0)
	{
		if(strcmp(f, "rock")==0)
		{
			if(strcmp(s, "paper")==0)
				printf("S");
			else
				printf("?");
		}
		else if(strcmp(f, "paper")==0)
		{
			if(strcmp(s, "scissors")==0)
				printf("S");
			else
				printf("?");
		}
		else if(strcmp(f, "scissors")==0)
		{
			if(strcmp(s, "rock")==0)
				printf("S");
			else
				printf("?");
		}
	}

	else if(cmp[1]==0)
	{
		if(strcmp(m, "rock")==0)
		{
			if(strcmp(f, "paper")==0)
				printf("F");
			else
				printf("?");
		}
		else if(strcmp(m, "paper")==0)
		{
			if(strcmp(f, "scissors")==0)
				printf("F");
			else
				printf("?");
		}
		else if(strcmp(m, "scissors")==0)
		{
			if(strcmp(f, "rock")==0)
				printf("F");
			else
				printf("?");
		}
	}
	else if(cmp[2]==0)
	{
		if(strcmp(s, "rock")==0)
		{
			if(strcmp(m, "paper")==0)
				printf("M");
			else
				printf("?");
		}
		else if(strcmp(s, "paper")==0)
		{
			if(strcmp(m, "scissors")==0)
				printf("M");
			else
				printf("?");
		}
		else if(strcmp(s, "scissors")==0)
		{
			if(strcmp(m, "rock")==0)
				printf("M");
			else
				printf("?");
		}
	}
	else
		printf("?");
}