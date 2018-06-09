import java.util.Scanner;

public class A899
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		int i,  c1=0, c2=0, count=0;
		int[] a = new int[n];

		for(i=0;i<n;i++)
		{	
			a[i] = in.nextInt();
			if(a[i]==1)
				c1++;
			else
				c2++;
		}

		if(c1==0)
			count=0;
		else if(c2==0)
		{
			if(c1<3)
				count=0;
			else
				count=c1/3;
		}
		else
		{
			if(c1<=c2)
				count=c1;
			else
			{
				count=c2;
				c1-=c2;
				if(c1>2)
					count+=c1/3;
			}
		}
		System.out.println(count);
	}
}