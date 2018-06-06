import java.util.Scanner;

public class A580
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		int[] a = new int[n];
		int[] count = new int[n];
		int i, j=0;

		for(i=0;i<n;i++)
		{	
			a[i]=in.nextInt();
			count[i]=0;
		}

		for(i=0;i<n-1;i++)
		{
			if(a[i]<=a[i+1])
				count[j]++;
			else
				j++;
		}

		int max=count[0];

		for(i=1;i<n;i++)
			if(max<=count[i])
				max=count[i];

		if((n==1)||(max==0))
			System.out.println("1");
		else if(max>0)
			System.out.println(max+1);
		else
			System.out.println(max);
	}
}