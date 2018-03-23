#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	scanf("%s", a);
	int l, count=0;

	l=strlen(a);
	
	int i;
	
	for(i=0;i<l;i++)
		if(a[i]<=90)
			count++;
	//printf("\n%d", count);
	if(count==l)
	{
		for(i=0;i<l;i++)
			if(a[i]<=90)
				a[i]=a[i]+32;			
		for(i=0;i<l;i++)
			printf("%c",a[i]);
		return 0;
	}

	else if((a[0]>90)&&(count==l-1))
	{
		a[0]=a[0]-32;

		for(i=1;i<l;i++)
			if(a[i]<=90)
				a[i]=a[i]+32;
		
		for(i=0;i<l;i++)
			printf("%c",a[i]);
	}
	else
		for(i=0;i<l;i++)
			printf("%c",a[i]);		
}