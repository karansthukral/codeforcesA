#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int m;
	m=2*n;
	int a[m], w[n], l[n];
	int i, j, tmp;

	for(i=0;i<m;i++)
		scanf("%d", &a[i]);

	for(i=0;i<m-1;i++)
		for(j=0;j<m-i-1;j++)
			if(a[j]<a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
	/*printf("\n");
	for(i=0;i<m;i++)
		printf("%d ", a[i]);*/

	//int count1=0;
	int count=0;
	for(i=0;i<n;i++)
		w[i]=a[i];
		//printf("\n%d %d %d", a[i], a[n+i], count);
	for(i=0;i<n;i++)
		l[i]=a[i+n];

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(w[i]>l[j])
				count++;


	if(count==(n*n))
		printf("YES");
	else
		printf("NO");

}